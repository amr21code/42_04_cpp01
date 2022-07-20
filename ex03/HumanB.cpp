/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:03:51 by anruland          #+#    #+#             */
/*   Updated: 2022/07/20 19:42:17 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->mName = name;
	this->setWeapon(NULL);
}

void	HumanB::setWeapon(Weapon type)
{
	this->mWeapon = &(type.getType());
}

void	HumanB::attack(void) const
{
	std::cout << this->mName << " attacks with their " << this->mWeapon << std::endl;
}