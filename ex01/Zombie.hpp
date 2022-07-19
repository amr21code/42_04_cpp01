/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 18:16:36 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 17:32:34 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>
#include <iostream>

class Zombie 
{
	public:
				Zombie(void);
				Zombie(std::string name);
				~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	mName;
};

#endif