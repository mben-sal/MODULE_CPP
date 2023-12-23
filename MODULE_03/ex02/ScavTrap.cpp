/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 21:12:54 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/26 21:12:58 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./ScavTrap.hpp"

ScavTrap::ScavTrap(/* args */)
{
	std::cout << "Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_point = 20;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &a)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	
	this->name_point = a.name_point;
	this->energy_point = a.energy_point;
	this->hit_point = a.hit_point;
	this->attack_point = a.attack_point;
	return(*this);
}

void ScavTrap::attack(const std::string &tragit)
{
	if(energy_point <= 0 || hit_point <= 0)
	{
		std::cout << "  ScavTrap  " << name_point << "  He doesn't have the energy to attack!  " << std::endl;
		return;
	}
	std::cout << " ScavTrap " << name_point << " attack " << tragit<< " causing " << this->attack_point << " points of damage !" << std::endl;
	energy_point -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}