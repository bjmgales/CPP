/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/05 12:24:06 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Bureaucrat::Bureaucrat():_name("Unknown"){
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name){
	try{
		checkRange(grade);
		_grade = grade;
	}
	catch(std::exception &e){
		std::cout << GREEN << e.what() << R << std::endl;
	}
}
Bureaucrat::~Bureaucrat(){
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name),
												 _grade(other._grade){
}

/******************************OVERLOAD OPERATORS*******************************/

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other){
	if (this != &other){
		_grade = other._grade;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream&os, const Bureaucrat &rhs){
	os << BOLDBLUE  << rhs.getName() <<
	", bureaucrat grade " << rhs.getGrade() << R << std::endl;
	return os;
}

/****************************SET/GET FUNCTIONS**********************************/

int 				Bureaucrat::getGrade() const{
	return (_grade);
}
std::string const	Bureaucrat::getName() const{
	return (_name);
}
/****************************MEMBERS FUNCTIONS**********************************/

void	Bureaucrat::incrementGrade(){
	try{
		checkRange(_grade - 1);
		_grade--;
	}
	catch (std::exception &e){
		std::cout << GREEN << e.what() << R << std::endl;
	}
}

void	Bureaucrat::decrementGrade(){
	try{
		checkRange(_grade + 1);
		_grade++;
	}
	catch (std::exception &e){
		std::cout << GREEN << e.what() << R << std::endl;
	}
}

void	 Bureaucrat::signForm(Form& f){

	if (getGrade() > f.getGrade("sign")){
		std::cout << BR <<
			getName() + " couldn't sign " + f.getName() +
			". Required grade is : " << f.getGrade("sign")
			<< ". Current bureaucrat grade is : " << getGrade() << "." << R << std::endl;
	}
	else{
		std::cout << GREEN << getName() << " signed "
			<< f.getName() << R << std::endl;
	}
}

void	 Bureaucrat::executeForm(const Form &f){
	if (getGrade() > f.getGrade("exec")){
		std::cout << BR <<
			getName() + " couldn't execute " + f.getName() +
			". Required grade is : " << f.getGrade("exec")
			<< ". Current bureaucrat grade is : " << getGrade() << "."  << R << std::endl;
	}
	else if(f.getStatus() == UNSIGNED){
		std::cout << BR <<
			getName() + " couldn't execute " + f.getName() +
			". Formular is unsigned." << R << std::endl;
	}
	else{
		f.execute(*this);
		std::cout << GREEN << getName() << " executed "
			<< f.getName() << R << std::endl;
	}
}

void	Bureaucrat::checkRange(int n){
	if (n < 1)
		throw GradeTooHighException();
	if (n > 150)
		throw GradeTooLowException();
}

/****************************EXCEPTIONS**********************************/

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high exception.");
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low exception.");
}



