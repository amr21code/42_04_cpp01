/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:41:41 by anruland          #+#    #+#             */
/*   Updated: 2022/08/01 16:02:40 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		Harl;
	std::string command;

	if (ac == 2)
		Harl.Complain(av[1]);
	else
		std::cout << "usage: ./harl <complaint> (without <>)" << std::endl;
	return (0);
}
