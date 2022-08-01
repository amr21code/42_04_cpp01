/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:43:08 by anruland          #+#    #+#             */
/*   Updated: 2022/08/01 15:32:22 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		Harl;
	std::string command;

	if (ac == 2)
	{
		command = av[1];
		if (command.compare("tests"))
			Harl.Complain(av[1]);
		else
		{
			Harl.Complain("DEBUG");
			Harl.Complain(" ");
			Harl.Complain("BS");
			Harl.Complain("debug");
			Harl.Complain("INFO");
			Harl.Complain("ERROR");
			Harl.Complain("WARNING");
			Harl.Complain("INFO");
		}
	}
	else
		std::cout << "usage: ./harl <complaint> (or <tests> for automated tests, without <>" << std::endl;
	return (0);
}
