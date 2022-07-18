/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:10:47 by anruland          #+#    #+#             */
/*   Updated: 2022/07/18 10:58:48 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	mName = "Foo";
	std::cout << "Zombie " << mName << " created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	mName = name;
	std::cout << "Zombie " << mName << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << mName << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << mName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	mName = name;
}
