/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:35:03 by anruland          #+#    #+#             */
/*   Updated: 2022/07/21 17:10:21 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
	public:
		void	Complain(std::string level) const;

	private:
		void	mDebug(void) const;
		void	mInfo(void) const;
		void	mWarning(void) const;
		void	mError(void) const;

};

#endif