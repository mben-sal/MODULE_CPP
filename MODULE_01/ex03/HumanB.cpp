/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:54:41 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/09 16:30:57 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanB.hpp"
#include "./HumanA.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &c)
{
	this->weapon = &c;
}
void HumanB::attack()
{
	if (weapon)
		std::cout << name << "attack with the " << weapon->getType() << std::endl;
	else
		std::cout << "Can not attack: No weapon" << std::endl;
}
HumanB::~HumanB()
{
}
