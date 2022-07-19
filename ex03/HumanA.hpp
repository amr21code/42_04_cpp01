/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:57:58 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 19:19:48 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <string>
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon type);
		~HumanA(void);
		void	attack(void) const;
		void	setWeapon(std::string type);

	private:
		std::string	mName;
		std::string mWeapon;
};

#endif