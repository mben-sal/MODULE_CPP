/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:50:23 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 15:16:14 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor called" << std::endl;
	this->type = "Animal";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = a.type;
}

Animal &Animal::operator=(const Animal &a)
{
	std::cout << "Animal assignation operator called" << std::endl;
	this->type = a.type;
	return(*this);
}

std::string Animal::get_type(void) const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}