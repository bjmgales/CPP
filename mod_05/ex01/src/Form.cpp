/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/04 15:11:34 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Form::Form():_name("Unknown"),_status(0), _execGrade(150), _signGrade(150){
}

Form::Form(std::string const name, int execGrade, int signGrade):_name(name),_execGrade(execGrade),
		_signGrade(signGrade), _status(0){
	try{
		checkRange(_execGrade, "");
		checkRange(_signGrade, "");
	}
	catch(std::exception &e){
		std::cout << e.what() << R << std::endl;
	}
}
Form::~Form(){
}

Form::Form(const Form &other):_name(other._name),
		_execGrade(other._execGrade), _signGrade(other._signGrade){
}

/******************************OVERLOAD OPERATORS*******************************/

Form& Form::operator=(const Form &other){
	if (this != &other){
		_status = other._status;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream&os, const Form &rhs){
	os << BOLDBLUE  << rhs.getName() <<
	", Execution requires" << " grade level " << rhs.getGrade("exec") << ". Signing requires "
	<< "grade level " << rhs.getGrade("sign") << "." << std::endl;
	if (rhs._status)
		std::cout << R <<  BR << "Formular is signed." << R << std::endl;
	if (!rhs._status)
		std::cout << R <<  BR << "Formular is unsigned." << R << std::endl;

	return os;
}

/****************************SET/GET FUNCTIONS**********************************/

int 				Form::getGrade(std::string type) const{
	if (type == "exec")
		return (_execGrade);
	if (type == "sign")
		return (_signGrade);
	else
		return (-1);
}
std::string const	Form::getName() const{
	return (_name);
}

int					Form::getStatus() const{
	return (_status);
}
/****************************MEMBERS FUNCTIONS**********************************/

void	Form::beSigned(Bureaucrat a){
	try{
		signAuthorized(a);
		_status = 1;
	}
	catch(std::exception &e){
		std::cout << e.what() << R << std::endl;
	}
}

void	Form::signAuthorized(Bureaucrat a){

	if (a.getGrade() > getGrade("sign")){
		throw GradeTooLowException();
	}
	_status = 1;

}
void	Form::checkRange(int n, std::string type){
	if (n < 1){
		std::cout << GREEN << type;
		throw GradeTooHighException();
	}
	if (n > 150){
		std::cout << GREEN << type;
		throw GradeTooLowException();
	}
}
/****************************EXCEPTIONS**********************************/

const char *Form::GradeTooHighException::what() const throw(){
	return ("Grade too high exception.");
}
const char *Form::GradeTooLowException::what() const throw(){
	return ("Grade too low exception.");
}




