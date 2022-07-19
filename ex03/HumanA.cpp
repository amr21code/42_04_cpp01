/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:03:25 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 19:20:37 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon type)
{
	this->mName = name;
	this->setWeapon(type.getType());
}

HumanA::~HumanA(void)
{
}

void	HumanA::setWeapon(std::string type)
{
	this->mWeapon = type;
}

void	HumanA::attack(void) const
{
	std::cout << this->mName << " attacks with their " << this->mWeapon << std::endl;
}