/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:34:23 by anruland          #+#    #+#             */
/*   Updated: 2022/07/21 09:10:33 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : mType(type)
{
}

Weapon::~Weapon(void)
{
}

std::string const &Weapon::getType(void) const
{
	return this->mType;
}

void Weapon::setType(std::string type)
{
	this->mType = type;
}