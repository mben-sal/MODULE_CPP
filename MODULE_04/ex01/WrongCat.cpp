/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:38:53 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 14:23:50 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"
#include"WrongAnimal.hpp"

WrongCat::WrongCat(/* args */)
{
	std::cout << "WrongCat Default Constructor Called"<< std::endl;
}

WrongCat::WrongCat(const WrongCat &a)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = a;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->_type = a._type;
	return(*this);
}

void WrongCat::makeSound()
{
	std::cout << "WrongCat sound" << std::endl;
}