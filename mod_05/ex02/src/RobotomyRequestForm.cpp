/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 16:20:12 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>


/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

RobotomyRequestForm::RobotomyRequestForm():Form("Unknown", 45, 72){
}

RobotomyRequestForm::RobotomyRequestForm(std::string &target):Form(target+"_Robotomy", 45, 72){
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):Form(other){
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

/******************************OVERLOAD OPERATORS*******************************/

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other){

	Form::operator=(other);
	return (*this);
}

/****************************VIRTUAL REDEF**********************************/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	size_t pos = getName().find("_Robotomy");
	std::string target = getName().substr(0, pos);

	unsigned int randNbr;

	srand(time(0));
	while ((randNbr = rand() % 10) == 6)
		randNbr = rand() % 10;

	try{
			execAuthorized(executor);
			std::cout << BOLDBLACK << "GGZZZZZZ BZZZZ BZZZZZ GZZZZ...." <<
				"KRRRRRRR... GZZZZZ BZZZZ BZZZZZ..." << std::endl;
			if (randNbr > 6)
				std::cout << BOLDMAGENTA << target << " robotomy failed..." << R << std::endl;
			else
				std::cout << BOLDMAGENTA << target << " robotomy succeed !" << R << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << R << std::endl;
	}
}



