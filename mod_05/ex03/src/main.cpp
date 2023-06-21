/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:58:13 by bgales            #+#    #+#             */
/*   Updated: 2023/06/05 14:16:33 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(){


	Intern slave;
	Form *newForm;
	Bureaucrat president("President", 1);

	newForm = slave.makeForm("wrong input", "toto");
	newForm = slave.makeForm("robotomy request", "Mark Zuckerberg");


	president.executeForm(*newForm);
	newForm->beSigned(president);
	president.executeForm(*newForm);

}