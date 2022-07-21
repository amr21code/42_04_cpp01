/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:36:40 by anruland          #+#    #+#             */
/*   Updated: 2022/07/21 17:09:58 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::Complain(std::string level) const
{
	
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