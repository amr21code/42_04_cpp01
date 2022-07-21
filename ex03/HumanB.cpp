/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:03:51 by anruland          #+#    #+#             */
/*   Updated: 2022/07/21 09:17:04 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : mName(name), mWeapon(NULL)
{
}

void	HumanB::setWeapon(Weapon &type)
{
	this->mWeapon = &type;
}

void	HumanB::attack(void) const
{
	if (!mWeapon)
	{
		std::cout << this->mName << " is unarmed" << std::endl;
		return ;
	}
	std::cout << this->mName << " attacks with their " << this->mWeapon->getType() << std::endl;
}