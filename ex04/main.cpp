/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:02:39 by anruland          #+#    #+#             */
/*   Updated: 2022/07/21 16:18:35 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

void	cpp_replace(std::string *input, std::string replace, std::string with)
{
	for (size_t i = 0; i < input->length(); i++)
	{
		if (input->find(replace, i) < input->length())
		{
			i = input->find(replace, i);
			input->erase(i, replace.length());
			input->insert(i, with);
			i += with.length();
		}
	}
}

int	main(int ac, char **av)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		str;
	std::string		input;
	std::string		inputFile;
	int				exit = 1;

	if (ac != 4)
	{
		std::cout << "usage: ./sed_loser <input file> \"str_to_replace\" \"str_replacement\"" << std::endl;
		return (0);
	}		
	ifs.open(av[1], std::ifstream::in);
	inputFile = av[1];
	inputFile.append(".replace");
	if (!ifs.good())
	{
		std::cout << "Error - could not read file" << std::endl;
		return (0);
	}
	getline(ifs, input);
	if (input.length() < 1)
	{
		std::cout << "Error - file empty" << std::endl;
		ifs.close();
		ofs.close();
		return (0);
	}
	ofs.open(inputFile.c_str());
	while (exit)
	{
		cpp_replace(&input, av[2], av[3]);
		ofs << input;
		if (ifs.eof())
			exit = 0;
		else
			ofs << std::endl;
		getline(ifs, input);
	}
	ifs.close();
	ofs.close();
}
