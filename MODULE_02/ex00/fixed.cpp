/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:10:16 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/21 17:21:04 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fixed.hpp"

fixed::fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->point = 0;
}

fixed::fixed(const fixed& b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}
//*********
fixed &fixed::operator=(const fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->point = a.getRawBits();
	return(*this);
}
//*** Cette surcharge de l'opérateur d'assignation est utilisée pour copier les données d'un objet Fixed dans un autre objet de la même classe

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
