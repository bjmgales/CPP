/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:58:13 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 12:46:08 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat("Thierry", 151); // GradeTooLow exception
	Bureaucrat("Thierry", 0);	// GradeTooHigh exception

	Bureaucrat Thierry("Thierry", 1);	// Thierry constructed.

	Thierry.incrementGrade(); // GradeToohigh exception, thierry's at maximum lvl.
	Thierry.decrementGrade(); // Thierry should now be lvl 2.
	std::cout << Thierry << std::endl;
	
}