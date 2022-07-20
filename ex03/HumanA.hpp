/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:57:58 by anruland          #+#    #+#             */
/*   Updated: 2022/07/20 19:44:55 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon type);
		void	attack(void) const;

	private:
		std::string	mName;
		std::string &mWeapon;
};

#endif