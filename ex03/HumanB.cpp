/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:03:51 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 19:29:23 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->mName = name;
	this->setWeapon();
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(std::string type)
{
	this->mWeapon = type;
}

void	HumanB::attack(void) const
{
	std::cout << this->mName << " attacks with their " << this->mWeapon << std::endl;
}