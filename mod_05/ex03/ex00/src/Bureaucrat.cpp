/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 12:24:53 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Bureaucrat::Bureaucrat():_name("Unknown"){
	std::cout << BR << "Bureaucrat" << R << " empty constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name){
	std::cout << BR << "Bureaucrat" << R << " default constructor called." << std::endl;
	try{
		checkRange(grade);
		_grade = grade;
	}
	catch(std::exception &e){
		std::cout << GREEN << e.what() << R << std::endl;
	}
}
Bureaucrat::~Bureaucrat(){
	std::cout << BR << "Bureaucrat" << R << " destructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name),
												 _grade(other._grade){
	std::cout << "Bureaucrat copy constructor called." << std::endl;
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

/****************************EXCEPTIONS**********************************/

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade too high exception.");
}
const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade too low exception.");
}




/****************************OTHER FUNCTIONS**********************************/

void	Bureaucrat::checkRange(int n){
	if (n < 1)
		throw GradeTooHighException();
	if (n > 150)
		throw GradeTooLowException();
}