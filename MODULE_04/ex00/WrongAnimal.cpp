/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:10:24 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/26 15:42:40 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"
#include"Animal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
	std::cout << "WrongAnimal Default Constructor Called\n";
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->_type = a._type;
	
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal Constructor Called\n";
	this->_type = type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	this->_type = a._type;
	return(*this);
}

void WrongAnimal::set_WrongAnimal(std::string w_type)
{
	this->_type = w_type;
}

std::string WrongAnimal::get_WrongAnimal()const
{
	return(this->_type);
}

void WrongAnimal::makesound(void)const
{
	std::cout << "WrongAnimal" << std::endl;
}