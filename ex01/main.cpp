/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:38:22 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 17:16:34 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie	*Horde;
	int		CountZombie;

	CountZombie = 5;
	Horde = zombieHorde(CountZombie, "Horde");
	if (!Horde)
		return (0);
	for (int i = 0; i < CountZombie; i++)
	{
		Horde[i].announce();
	}
	Horde[4].setName("newNameZombie");
	delete[] Horde;

	return (0);
}
