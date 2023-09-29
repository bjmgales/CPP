/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:07:19 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 16:58:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(){
	Data* toto_ptr;

	std::cout << "toto_ptr adress is : " << toto_ptr << std::endl;
	std::cout << "serialized ptr adress is : "
		<< Serializer::serialize(toto_ptr) << std::endl;
	Data toto("toto");
	toto_ptr = &toto;
	std::cout << toto_ptr->getName() << std::endl;
	std::cout << Serializer::deserialize(Serializer::serialize(toto_ptr))->getName() << std::endl;
}

