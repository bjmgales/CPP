/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 16:20:12 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>


/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

ShrubberyCreationForm::ShrubberyCreationForm():Form("Unknown", 137, 145){
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target):Form(target+"_Shrubbery", 137, 145){
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):Form(other){
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

/******************************OVERLOAD OPERATORS*******************************/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){

	Form::operator=(other);
	return (*this);
}

/****************************VIRTUAL REDEF**********************************/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{


	std::fstream shrubFile;

	try{
		execAuthorized(executor);
		shrubFile.open(getName(), std::fstream::out|std::fstream::app);
		shrubFile << "         *\n        / \\\n       /   \\\n      /     \\\n     /       \\\n    /         \\\n   *           *\\\n  / \\         / \\\n /   \\       /   \\\n*     *     *     *\\\n       |   |\n       |   |\n";
		shrubFile.close();
	}
	catch (std::exception &e){
		std::cout << e.what() << R << std::endl;
	}
}


