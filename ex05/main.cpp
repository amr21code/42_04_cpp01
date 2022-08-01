/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:43:08 by anruland          #+#    #+#             */
/*   Updated: 2022/08/01 15:43:48 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		Harl;
	std::string command;

	Harl.Complain("DEBUG");
	Harl.Complain(" ");
	Harl.Complain("BS");
	Harl.Complain("debug");
	Harl.Complain("INFO");
	Harl.Complain("ERROR");
	Harl.Complain("WARNING");
	Harl.Complain("INFO");
	return (0);
}
