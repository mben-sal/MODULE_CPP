/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:21:56 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/21 18:01:49 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"


Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->point = 0;
}

Fixed::Fixed(const Fixed& b)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = b;
}
//*********
Fixed &Fixed::operator=(const Fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this == &a)
		return *this;
	this->point = a.getRawBits();
	return(*this);
}
//*** Cette surcharge de l'opérateur d'assignation est utilisée pour copier les données d'un objet Fixed dans un autre objet de la même classe

void Fixed::setRawBits(int const r)
{
	this->point = r;
}
int Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->point);
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt(void) const
{
	int c;
	
	c = this->point / 256;
	return(c);
}

float Fixed::toFloat(void)const
{
	float d;
	
	d = this->point / 256.0000000;
	return(d);
}

Fixed::Fixed(const int q)
{
	std::cout << "Int constructor called" << std::endl;
	this->point = (int)(round)(q * 256);
}

Fixed::Fixed(const float b)
{
	std::cout << "float constructor called"<< std::endl;
	
	this->point = (int)(round)(b * 256);
}

std::ostream &operator<< (std::ostream &p, const Fixed &f)
{
	p << f.toFloat();
	return(p); 
}