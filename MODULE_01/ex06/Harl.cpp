/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:50:39 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 20:29:10 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}
void Harl::info()
{
 	std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning()
{
	std::cout << std::endl << "[ WARNING ]" << std::endl;
 	std::cout << " I  think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string lvl)
{
	int i;
	std::string complains [4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fonction[4])();
	
	i = 0;

	fonction[0] = &Harl::debug;
	fonction[1] = &Harl::info;
	fonction[2]	= &Harl::warning;
	fonction[3] = &Harl::error;

	while (i < 4)
	{
		if(lvl == complains[i])
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		Harl::debug();
		// break;
	case 1:
		Harl::info();
		// break;
	case 2:
		Harl::warning();
		// break;
	case 3:
		Harl::error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
