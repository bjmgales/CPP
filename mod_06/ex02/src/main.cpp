/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:56:57 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 16:58:56 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <unistd.h>
#include <cstdlib>

Base *generate(){

	unsigned int	randNbr;
	int				value;

	srand(time(NULL));
	randNbr = rand() % 3;

	if (randNbr == 0)
		return (new A());
	else if (randNbr == 1)
		return (new B());
	else if (randNbr == 2)
		return (new C());
	else
		return (NULL);
}

void identify(Base *p){
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if (a != nullptr)
		std::cout << "Pointer => Base object was instanciated through A child class" << std::endl;
	else if (b != nullptr)
		std::cout << "Pointer => Base object was instanciated through B child class" << std::endl;
	else if (c != nullptr)
		std::cout << "Pointer => Base object was instanciated through C child class" << std::endl;
	else
		std::cout << "No match for this class."<< std::endl;
}

void identify(Base &p){
	try{
		A &a = dynamic_cast<A&>(p);
		std::cout << "Reference => Base object was instanciated through A child class" << std::endl;
	}
	catch(std::bad_cast &e){
		try{
			B &b = dynamic_cast<B&>(p);
			std::cout << "Reference => Base object was instanciated through B child class" << std::endl;
		}
		catch(std::bad_cast &e){
			try{
				C &c = dynamic_cast<C&>(p);
				std::cout << "Reference => Base object was instanciated through C child class" << std::endl;
			}
			catch(std::bad_cast &e){
				std::cout << e.what() << std::endl;
			}
		}

	}
}

int main(){

	Base *one = generate();
	identify(one);
	identify(*one);
	std::cout << std::endl;
	sleep(rand() % 3);
	delete one;

	Base *two = generate();
	identify(two);
	identify(*two);
	std::cout << std::endl;
	sleep(rand() % 3);
	delete two;

	Base *three = generate();
	identify(three);
	identify(*three);
	std::cout << std::endl;
	sleep(rand() % 3);
	delete three;

	return 0;
}

// delete nullptr c++11
// delete bad_cast no type info forbidden
