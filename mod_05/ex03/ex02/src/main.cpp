/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:58:13 by bgales            #+#    #+#             */
/*   Updated: 2023/06/05 12:23:20 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(){


	Bureaucrat president("President", 1);
	Bureaucrat primeMinister ("Prime Minister", 25);
	Bureaucrat janitor ("Janitor", 150);


	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*" << BR << "Presidential Pardon Form Test" << R << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << std::endl;

	std::string presidentialTarget = "Guy-Georges";
	PresidentialPardonForm guyGeorges(presidentialTarget);
	janitor.signForm(guyGeorges);
	guyGeorges.execute(president);
	guyGeorges.beSigned(primeMinister);
	guyGeorges.beSigned(president);
	guyGeorges.execute(primeMinister);
	primeMinister.executeForm(guyGeorges);
	president.executeForm(guyGeorges);

	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*" << BR << "Robotomy Form Test" << R << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << std::endl;

	std::string robotomyTarget = "Mark-Zuckerberg";
	RobotomyRequestForm markZuck(robotomyTarget);
	janitor.signForm(markZuck);
	markZuck.execute(president);
	markZuck.beSigned(primeMinister);
	markZuck.beSigned(president);
	janitor.executeForm(markZuck);
	president.executeForm(markZuck);

	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*" << BR << "Shrubbery Form Test" << R << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << std::endl;

	std::string shrubberyTarget = "Greta-Thunberg";
	ShrubberyCreationForm gretaThun(shrubberyTarget);
	janitor.signForm(gretaThun);
	gretaThun.execute(president);
	gretaThun.beSigned(primeMinister);
	gretaThun.beSigned(president);
	janitor.executeForm(gretaThun);
	president.executeForm(gretaThun);
}