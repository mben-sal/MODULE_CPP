/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:43:48 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/17 18:33:43 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main()
{
	std::string lvl;
	Harl harl;
	while(std::cin)
	{
		std::cout << "What complaining level you want harl to attend ";
		std::cin >> lvl;
		harl.complain(lvl);
		std::endl;
	}
}