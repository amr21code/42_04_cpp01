/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:34:23 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 19:16:07 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon(void)
{
}

const std::string &Weapon::getType(void) const
{
	const std::string &rType = this->mType;

	return rType;
}

void Weapon::setType(std::string type)
{
	this->mType = type;
}