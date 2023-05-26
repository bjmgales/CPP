/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:42:57 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 17:59:00 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

/**
 * @file Zombie.hpp
 * @brief Contains the declaration of the Zombie class.
 */

#include <iostream>
#include <string>

/**
 * @class Zombie
 * @brief Represents a zombie entity with a name and behavior.
 */
class Zombie {
private:
    std::string _name; /* The name of the zombie. */

public:
    /**
     * @brief Default constructor for the Zombie class.
     */
    Zombie();

    /**
     * @brief Parameterized constructor for the Zombie class.
     * @param name The name of the zombie.
     */
    Zombie(std::string name);

    /**
     * @brief Destructor for the Zombie class.
     */
    ~Zombie();

    /**
     * @brief Announces the zombie by printing its name and sound.
     */
    void announce();

    /**
     * @brief Sets the name of the zombie.
     * @param name The name of the zombie.
     */
    void set_name(std::string name);
};

/**
 * @brief Creates an array of Zombie objects on the heap.
 * @param N The number of zombies to create.
 * @param name The base name for the zombies.
 * @return Pointer to the first Zombie object in the created array.
 */
Zombie* zombieHorde(int N, std::string name);

/**
 * @brief Entry point of the program.
 * @return Exit status of the program.
 */
int main();
