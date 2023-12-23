/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:04:32 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/23 19:51:20 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
#include"./ClapTrap.hpp"

FragTrap::FragTrap()
{ 
	std::cout << "Default Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->energy_point = 100;
	this->hit_point = 100;
	this->attack_point = 30;
}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->name_point = a.name_point;
	this->energy_point = a.energy_point;
	this->hit_point = a.hit_point;
	this->attack_point= a.attack_point;
	return(*this);
}

void FragTrap::highFive()
{
	std::cout << "FragTrap " << this->name_point << " give you a high five" << std::endl;
}

void FragTrap::attack(const std::string &tragit)
{
	if(energy_point <= 0 || hit_point <= 0)
	{
		std::cout << "  FragTrap  " << name_point << "  He doesn't have the energy to attack!  " << std::endl;
		return;
	}
	std::cout << " FragTrap " << name_point << " attack " << tragit << " causing " << this->attack_point << " points of damage !" << std::endl;
	energy_point -= 1;
}