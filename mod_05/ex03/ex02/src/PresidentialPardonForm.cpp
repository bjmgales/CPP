/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationPresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 16:20:12 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

PresidentialPardonForm::PresidentialPardonForm():Form("Unknown", 5, 25){
}

PresidentialPardonForm::PresidentialPardonForm(std::string &target):Form(target+"_PresidentialPardon", 5, 25){
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):Form(other){
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

/******************************OVERLOAD OPERATORS*******************************/

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other){

	Form::operator=(other);
	return (*this);
}

/****************************VIRTUAL REDEF**********************************/

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	size_t pos = getName().find("_PresidentialPardon");
	std::string target = getName().substr(0, pos);
	try{
			execAuthorized(executor);
			std::cout << BOLDMAGENTA << "The President Zaphod " <<
			"Beeblerox pardon was granted to " << target << R << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << R << std::endl;
	}
}


