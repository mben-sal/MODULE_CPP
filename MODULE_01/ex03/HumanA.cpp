/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:55:02 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/03 12:32:52 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

HumanA::HumanA(std::string name , Weapon &clup) : name(name) , clup(clup)
{
	
}

void HumanA::attack(void)
{
	std::cout << name << " attack with the " << clup.getType() << std::endl;
}
HumanA::~HumanA()
{
}