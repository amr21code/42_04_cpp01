/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 10:49:52 by anruland          #+#    #+#             */
/*   Updated: 2022/07/18 11:03:38 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie		*zombieHorde;
	std::string	indivName;

	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		indivName = name;
		indivName.append(" ");
		indivName.append(" ");
		zombieHorde[i].setName(indivName);
	}
}
