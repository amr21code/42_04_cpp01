/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:31:06 by anruland          #+#    #+#             */
/*   Updated: 2022/07/21 09:09:12 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string	const	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string mType;
};

#endif