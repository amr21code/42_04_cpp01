/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:02:51 by anruland          #+#    #+#             */
/*   Updated: 2022/07/20 19:41:04 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack(void) const;
		void	setWeapon(Weapon type);

	private:
		std::string	mName;
		std::string *mWeapon;
};


#endif