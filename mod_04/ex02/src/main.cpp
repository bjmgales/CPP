/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:11:09 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 11:49:47 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

void test(){
	Cat *t = new Cat;
	Cat g;

	g = *t;

}

int main()
{
	test();
	system("leaks Brain");
}