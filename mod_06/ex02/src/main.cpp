/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:56:57 by bgales            #+#    #+#             */
/*   Updated: 2023/06/08 13:40:47 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <unistd.h>

Base *generate(){

	unsigned int	randNbr;
	int				value;

	srand(time(NULL));
	randNbr = rand() % 3;
	// std::cout << "randNbr = " << randNbr << std::endl;

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
		std::cout << "Base object was instanciated through A child class" << std::endl;
	if (b != nullptr)
		std::cout << "Base object was instanciated through B child class" << std::endl;
	if (c != nullptr)
		std::cout << "Base object was instanciated through C child class" << std::endl;
}

void identify(Base &p){
	A *a = dynamic_cast<A*>(&p);
	B *b = dynamic_cast<B*>(&p);
	C *c = dynamic_cast<C*>(&p);
	if (a != nullptr)
		std::cout << "Base object was instanciated through A child class" << std::endl;
	if (b != nullptr)
		std::cout << "Base object was instanciated through B child class" << std::endl;
	if (c != nullptr)
		std::cout << "Base object was instanciated through C child class" << std::endl;
}
int main(){

	/***********************************Pointers***********************************/

	Base *one = generate();
	identify(one);
	sleep(rand() % 3);

	Base *two = generate();
	identify(two);
	sleep(rand() % 3);

	Base *three = generate();
	identify(three);
	sleep(rand() % 3);

	/***********************************References***********************************/

	Base &one_ref = *generate();
	identify(one_ref);
	sleep(rand() % 3);
	Base &two_ref = *generate();
	identify(two_ref);
	sleep(rand() % 3);
	Base &three_ref = *generate();
	identify(three_ref);
	sleep(rand() % 3);
}