/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:31:53 by bgales            #+#    #+#             */
/*   Updated: 2023/06/06 11:20:25 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/******************************CONSTRUCTORS/DESTRUCTORS*******************************/


Intern::Intern(){
}

Intern::~Intern(){
}

Intern::Intern(const Intern &other){

}

/******************************OVERLOAD OPERATORS************************************/

Intern& Intern::operator=(const Intern &other){
	return (*this);
}

/*********************************MEMBER FUNCTIONS**********************************/

Form*	Intern::makeRobotomy(std::string target){
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makePardon(std::string target){
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeShrubbery(std::string target){
	return (new ShrubberyCreationForm(target));
}

Form * Intern::makeForm(std::string formType, std::string target){
	const char *levels[] = {"robotomy request", "presidential pardon", "shrubbery creation", NULL};

	functptr[0] = &makeRobotomy;
	functptr[1] = &makePardon;
	functptr[2] = &makeShrubbery;

	for (int i = 0; levels[i] != NULL; i++){
		if (formType == levels[i])
			return (functptr[i](target));
	}
	std::cout << BR <<  "Error: " << formType
		<< " is not a valid formulary type." << R << std::endl;
	return (NULL);
}