/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anruland <anruland@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:18:13 by anruland          #+#    #+#             */
/*   Updated: 2022/07/19 17:28:06 by anruland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainPtr = &brain;
	std::string	&brainRef = brain;

	std::cout << "addresses" << std::endl;
	std::cout << "string " << &brain << std::endl;
	std::cout << "pointer " << brainPtr << std::endl;
	std::cout << "reference " << &brainRef << std::endl;

	std::cout << "values" << std::endl;
	std::cout << "string " << brain << std::endl;
	std::cout << "pointer " << *brainPtr << std::endl;
	std::cout << "reference " << brainRef << std::endl;
}
