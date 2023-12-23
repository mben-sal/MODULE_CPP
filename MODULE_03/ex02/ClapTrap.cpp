/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:03:49 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/26 21:03:53 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name_point(name) , hit_point(10), energy_point(10), attack_point(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a)
{
	name_point = a.name_point;
	hit_point = a.hit_point;
	energy_point = a.energy_point;
	attack_point = a.attack_point;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &a)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;

		this->name_point = a.name_point;
		this->hit_point = a.hit_point;
		this->energy_point = a.energy_point;
		this->attack_point = a.attack_point;
		return(*this);
}

void ClapTrap::attack(const std::string &targit)
{
	if(energy_point <= 0 || hit_point <= 0)
	{
		std::cout << "  ClapTrap  " << name_point << "  He doesn't have the energy to attack!  " << std::endl;
		return;
	}
	std::cout << " ClapTrap " << name_point << " attack " << targit << " causing " << this->attack_point << " points of damage !" << std::endl;
	energy_point -= 1;
}

void ClapTrap::takedamage(unsigned int mn)
{
	if((unsigned int)hit_point <= mn)
	{
		hit_point = 0;
		std::cout << " ClapTrap " << name_point << " He doesn't have the hitpoints left! " << std::endl;
		return;
	}
	std::cout << " ClapTrap " << name_point << " take Amount " << mn << " points of damage!" << std::endl;
	hit_point -= mn;
}

void ClapTrap::beRepaire(unsigned int mn)
{
	if ((unsigned int)energy_point <= mn)
	{
		std::cout << " ClapTrap " << name_point << " is out of energy "  << std::endl;
		return;
	}
	std::cout << " ClapTrap " << name_point << " be repaired " << mn;
	std::cout << " points of damage!" << std::endl;
	energy_point -= 1;
	hit_point += mn;
}