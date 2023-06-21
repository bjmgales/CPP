/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 11:58:13 by bgales            #+#    #+#             */
/*   Updated: 2023/06/03 15:38:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(){

	Bureaucrat Patrick("Patrick", 1);
	Form PatrickFormular("Patrick_Formular", 1, 1);

	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*" << BR << "Patrick Test" << R << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << std::endl;

	std::cout << PatrickFormular;
	PatrickFormular.beSigned(Patrick);
	Patrick.signForm(PatrickFormular);
	std::cout << PatrickFormular;

	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*" << BR << "Henry Test" << R << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << std::endl;
	Bureaucrat Henry ("Henry" , 150);
	Form HenryFormular("Henry_Formular", 1, 1);
	std::cout << HenryFormular;
	HenryFormular.beSigned(Henry);
	Henry.signForm(HenryFormular);

	std::cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*" << BR << "Wrong Grade Test" << R << "-*-*-*-*-*-*-*-*-*-*-*-*-*\n" << std::endl;

	Form wrongGrade("Wrong grade formular", 0, 150);
	Form wrongGrade2("Wrong grade formular", 1, 159);

}