/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:10:16 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/19 18:37:17 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fixed.hpp"
const int fixed::r = 8;

fixed::fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->point = 0;
}

fixed::fixed(const fixed& a)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

fixed &fixed::operator=(const fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->point = a.getRawBits();
	return(*this);
}
void fixed::setRawBits(int const r)
{
	this->point = r;
}
int fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->point);
}
fixed::~fixed()
{
	std::cout << "Destructor called" << std::endl;
}
