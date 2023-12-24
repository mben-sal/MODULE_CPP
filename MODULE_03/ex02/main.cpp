/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:47:51 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/24 14:28:26 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	
	std::cout << "\n";

	FragTrap seul("naj");

	seul.attack("n");
	seul.takedamage(10);
	seul.beRepaire(10);
	seul.highFivesGuys();
	std::cout << "\n";
}