/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:13:02 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 18:07:21 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string ft_replace(std::string oldWord, std::string newWord, std::string line)
{
	size_t	i = 0;

	if ((i = line.find(oldWord, i)) < line.length())
		line = line.substr(0, i) + newWord + line.substr(i + oldWord.length());
	return (line);
}

int main(int argc, char **argv)
{
	std::fstream	oldF;
	std::fstream	newF;
	std::string		line;

	if (argc != 4)
	{
		std::cout << "Expecting : ./sed4L filename s1 s2" << std::endl;
		return (1);
	}

	char 			*filename = argv[1];
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];


	std::string newfile = (std::string)filename + ".replace";
	newF.open((std::string)filename + ".replace",  std::ios::out);
	oldF.open(filename);
	while (std::getline(oldF, line))
	{
		line = ft_replace(s1, s2, line);
		newF << line + "\n";
	}
	oldF.close();
	newF.close();
}