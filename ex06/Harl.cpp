/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:36:40 by anruland          #+#    #+#             */
/*   Updated: 2022/08/01 17:04:14 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::Complain(std::string level) const
{
	std::string const	alvlComplain[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			 	(Harl::*pComplainFct[])() const = {&Harl::mDebug, &Harl::mInfo, &Harl::mWarning, &Harl::mError};
	int					i;

	i = 0;
	while(i < 4)
	{
		if (!level.compare(alvlComplain[i]))
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*pComplainFct[0])();
			//fall through
			
		case 1:
			(this->*pComplainFct[1])();
			//fall through

		case 2:
			(this->*pComplainFct[2])();
			//fall through

		case 3:
			(this->*pComplainFct[3])();
			break;
		
		default:
			std::cout << "not a matching complaint" << std::endl;
	}
}

void	Harl::mDebug(void) const
{
	std::cout << "DEBUG: This message is for debugging" << std::endl;
}

void	Harl::mInfo(void) const
{
	std::cout << "INFO: Just fyi" << std::endl;
}

void	Harl::mWarning(void) const
{
	std::cout << "WARNING: be careful!" << std::endl;
}

void	Harl::mError(void) const
{
	std::cout << "ERROR: not gonna happen!" << std::endl;
}