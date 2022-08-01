/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:43:08 by anruland          #+#    #+#             */
/*   Updated: 2022/08/01 15:20:40 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;

	if (ac == 2)
		Harl.Complain(av[1]);
	else
		std::cout << "usage: ./harl <complaint>" << std::endl;
	return (0);
}
