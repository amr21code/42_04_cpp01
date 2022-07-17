/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:15:03 by anruland          #+#    #+#             */
/*   Updated: 2022/07/17 19:36:49 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie *pZombie;
	Zombie Zombie;
	pZombie = newZombie("Pete");
	randomChump("Chump");
	pZombie->announce();
	Zombie.announce();
	delete(pZombie);
	return (0);
}