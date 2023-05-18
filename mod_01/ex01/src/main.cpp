/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:32:30 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 17:20:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newZ;
	int	N;

	N = 100;

	newZ = zombieHorde(N, "johnny");
	 for (int i = 0; i < N; i++)
	 {
		newZ[i].announce();
		//std::cout << i << std::endl;
	 }
	delete[] newZ;
	system("leaks moarBrainz!");
}