/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   main.cpp	   :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: bgales <bgales@student.42.fr>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2023/09/08 14:41:33 by bgales	#+#	#+#	 */
/*   Updated: 2023/09/10 20:15:42 by bgales	   ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{

	std::cout << "\n******** Using MutantStack *********\n" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
//////////////////
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n******** Using List *********\n" << std::endl;

	std::list<int> mylist;

	mylist.push_back(5);
	mylist.push_back(17);
	std::cout << mylist.back() << std::endl;
	mylist.pop_back();
	std::cout << mylist.size() << std::endl;
	mylist.push_back(3);
	mylist.push_back(5);
	mylist.push_back(737);
	//////////////////
	mylist.push_back(0);
	std::list<int>::iterator list_it = mylist.begin();
	std::list<int>::iterator list_ite = mylist.end();
	++list_it;
	--list_it;
	while (list_it != list_ite) {
		std::cout << *list_it << std::endl;
		++list_it;
	}

	std::cout << "\n******** Using Vector *********\n" << std::endl;

	std::vector<int> myVector;

	myVector.push_back(5);
	myVector.push_back(17);
	std::cout << myVector.back() << std::endl;
	myVector.pop_back();
	std::cout << myVector.size() << std::endl;
	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(737);
	//////////////////
	myVector.push_back(0);

	std::vector<int>::iterator vect_it = myVector.begin();
	std::vector<int>::iterator vect_ite = myVector.end();
	++vect_it;
	--vect_it;

	while (vect_it != vect_ite) {
		std::cout << *vect_it << std::endl;
		++vect_it;
	}

	return 0;


}
