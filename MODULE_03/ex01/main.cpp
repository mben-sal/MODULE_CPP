/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:55:27 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/23 18:20:50 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

int	main()
{
	ScavTrap	solder("manar");

	std::cout << "\n";
	solder.attack("m");
	solder.takedamage(50);
	solder.beRepaire(10);
	solder.guardGate();
	std::cout << "\n";
}