/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:08:48 by bgales            #+#    #+#             */
/*   Updated: 2023/06/28 11:08:58 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

#define RESET	"\033[0m"
#define BLACK	"\033[30m" /*Black*/
#define RED		"\033[31m" /*Red*/
#define GREEN	"\033[32m" /*Green*/
#define YELLOW  "\033[33m" /*Yellow*/
#define BLUE	"\033[34m" /*Blue*/
#define MAGENTA "\033[35m" /*Magenta*/
#define CYAN	"\033[36m" /*Cyan*/
#define WHITE	"\033[37m" /*White*/
#define BOLDBLACK	"\033[1m\033[30m" /*Bold Black*/
#define BOLDRED	"\033[1m\033[31m" /*Bold Red*/
#define BOLDGREEN	"\033[1m\033[32m" /*Bold Green*/
#define BOLDYELLOW  "\033[1m\033[33m" /*Bold Yellow*/
#define BOLDBLUE	"\033[1m\033[34m" /*Bold Blue*/
#define BOLDMAGENTA "\033[1m\033[35m" /*Bold Magenta*/
#define BOLDCYAN	"\033[1m\033[36m" /*Bold Cyan*/
#define BOLDWHITE	"\033[1m\033[37m" /*Bold White*/

/**
*@file Zombie.hpp
*@brief Contains the declaration of the Zombie class.
*/

#include <iostream>
#include <string>

/**
*@class Zombie
*@brief Represents a zombie entity with a name and behavior.
*/
class Zombie {
private:

	std::string _name; /** The name of the zombie.*/

public:
/**
*@brief Default constructor for the Zombie class.
*/
	Zombie();

/**
*@brief Parameterized constructor for the Zombie class.
*@param name The name of the zombie.
*/
	Zombie(std::string name);

/**
*@brief Destructor for the Zombie class.
*/
	~Zombie();

/**
*@brief Announces the zombie by printing its name and sound.
*/
	void announce();

/**
*@brief Sets the name of the zombie.
*@param name The name of the zombie.
*/
	void set_name(std::string name);
};

/**
*@brief Creates a new Zombie object on the heap and returns a pointer to it.
*@param name The name of the zombie.
*@return Pointer to the created Zombie object.
*/
	Zombie*newZombie(std::string name);

/**
*@brief Creates a temporary Zombie object on the stack and announces it.
*@param name The name of the zombie.
*/
	void randomChump(std::string name);
