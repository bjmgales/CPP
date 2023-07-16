/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:58:13 by bgales            #+#    #+#             */
/*   Updated: 2023/07/12 12:22:16 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(){


	Intern slave;
	Form *newForm;
	Bureaucrat president("President", 1);

	newForm = slave.makeForm("WRONG INPUT", "toto");
	newForm = slave.makeForm("robotomy request", "Mark Zuckerberg");


	president.executeForm(*newForm);
	newForm->beSigned(president);
	president.executeForm(*newForm);

}