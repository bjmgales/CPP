#include <iostream>
#include <iterator>
#include <list>
#include <set>
#pragma once

template<typename T>
bool easyfind(T elem, int i)
{
	typename T::iterator it = find(elem.begin(), elem.end(), i);
	try{
		if (it == elem.end())
			throw std::runtime_error("No corresponding value could be found in the array");
		return (true);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
		return (false);
	}
}
