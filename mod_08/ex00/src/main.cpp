#include "easyfind.hpp"

int main()
{
	std::list<int> list_arr;
	std::cout << "\nEasyfind with Lists : \n" << std::endl;

	/*Not found*/

	list_arr.push_back(1); list_arr.push_back(2); list_arr.push_back(3); list_arr.push_back(4);
	easyfind(list_arr, 10);

	std::cout << "\n---------------\n" << std::endl;
	/*Found*/

	if (easyfind(list_arr, 1) == true)
		std::cout << "true" << std::endl;


	std::cout << "\nEasyfind with Vectors : \n" << std::endl;
	/*Not found*/
	std::vector<int> vec_arr;
	vec_arr.push_back(-100); vec_arr.push_back(2515); vec_arr.push_back(3); vec_arr.push_back(4);
	easyfind(vec_arr, -1);

	std::cout << "\n---------------\n" << std::endl;
	/*Found*/
	if (easyfind(vec_arr, -100) == true)
		std::cout << "true" << std::endl;


	std::cout << "\nEasyfind with Set : \n" << std::endl;
	/*Not found*/
	std::set<int> set_arr;
	set_arr.insert(-100); set_arr.insert(2515); set_arr.insert(3); set_arr.insert(4);
	easyfind(set_arr, -1);

	std::cout << "\n---------------\n" << std::endl;
	/*Found*/
	if (easyfind(set_arr, -100) == true)
		std::cout << "true" << std::endl;
}
