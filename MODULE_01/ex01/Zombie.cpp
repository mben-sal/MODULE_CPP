/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:42:53 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/09 12:22:18 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void Zombie::set_name(std::string name)
{
	this->_name = name;
	std::cout << name << " : Created" <<std::endl;

}

void Zombie::annonce()
{
	std::cout << this->_name<< " : BraiiiiiiinnnzzzZ..." << std::endl;
}

// void destroy(Zombie *zombie, std::string name)
// {
// 	std::cout << name << " : Destroyed" << std::endl;
// 	delete(zombie);
// }

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << _name << " : Destroyed" << std::endl;
}