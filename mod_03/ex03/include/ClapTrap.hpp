/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:21:29 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 13:05:11 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define R   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BR     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator = (const ClapTrap &other);
		~ClapTrap();

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		bool			energyCheck();
		bool			healthCheck();

		unsigned int	getInfo(std::string info) const;
		void			setInfo(unsigned int energyPoints,
								unsigned int hitPoints,
								unsigned int attackDamage);

		void			setName(std::string name);
		std::string		getName() const;

		void			displayInfo();
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
};