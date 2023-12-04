/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:02:02 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/03 12:26:53 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

Weapon::Weapon(/* args */)
{
}
Weapon::~Weapon()
{
}
Weapon::Weapon(std::string type)
{
	this->_type = type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
const std::string &Weapon::getType(void)
{
	return(_type);
}