/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:24:05 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/22 18:43:11 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

Class_Fixed::Class_Fixed(/* args */)
{
	this->point = 0;
}

Class_Fixed::Class_Fixed(const Class_Fixed& b)
{
	*this = b;
}
//*********
Class_Fixed &Class_Fixed::operator=(const Class_Fixed& a)
{
	if(this == &a)
		return *this;
	this->point = a.getRawBits();
	return(*this);
}
//*** Cette surcharge de l'opérateur d'assignation est utilisée pour copier les données d'un objet Fixed dans un autre objet de la même classe
std::ostream &operator<< (std::ostream &a, const Class_Fixed &b)
{
	a << b.toFloat();
	return(a);
}
int Class_Fixed::toInt(void) const
{
	return ((int)this->point >> this->r);
}

float Class_Fixed::toFloat(void) const
{
	return ((float)this->point / (1 << this->r));
}
void Class_Fixed::setRawBits(int const r)
{
	this->point = r;
}
int Class_Fixed::getRawBits(void)const
{
	return(this->point);
}
Class_Fixed::~Class_Fixed()
{
}
Class_Fixed::Class_Fixed(const int q)
{
	this->point = q* (1 << this->r);
}

Class_Fixed::Class_Fixed( const float b)
{	
	this->point = b * (1 << this->r);
}
Class_Fixed Class_Fixed::operator+ (const Class_Fixed a)
{
	Class_Fixed b;

	b.setRawBits((this->point + a.point) >> this->point);
	return(b);
}
Class_Fixed Class_Fixed::operator-(const Class_Fixed a)
{
	Class_Fixed b;

	b.setRawBits((this->point - a.point) >> this->point);
	return(b);
}

Class_Fixed Class_Fixed::operator*(const Class_Fixed a)
{
	Class_Fixed b;

	b.setRawBits((this->point * a.point) >> this->point);
	return(b);
}

Class_Fixed Class_Fixed::operator/ (const Class_Fixed a)
{
	Class_Fixed b;
	
	b.setRawBits((this->point / a.point) >> this->point);
	return(b);
}

bool Class_Fixed::operator!= (const Class_Fixed a)
{
	if(this->point != a.point)
		return true;
	return false;
}

bool Class_Fixed::operator== (const Class_Fixed a)
{
	if(this->point == a.point)
		return true;
	return false;
}

bool Class_Fixed::operator< (const Class_Fixed a)
{
	if(this->point < a.point)
		return true;
	return false;
}

bool Class_Fixed::operator<= (const Class_Fixed a)
{
	if(this->point < a.point || this->point == a.point)
		return true;
	return false;
}

bool Class_Fixed::operator>= (const Class_Fixed a)
{
	if(this->point > a.point || this->point == a.point)
		return true;
	return false;
}

Class_Fixed Class_Fixed::operator-- (int)
{
	Class_Fixed b;
	
	b.point = point--;
	return(b);
}

Class_Fixed Class_Fixed::operator++ (int)
{
	Class_Fixed b;

	b.point = point++;
	return(b);
}

Class_Fixed Class_Fixed::operator-- ()
{
	Class_Fixed b;
	
	b.point = --point;
	return(b);
}

Class_Fixed Class_Fixed::operator++ ()
{
	Class_Fixed b;

	b.point = ++point;
	return(b);
}

const Class_Fixed &Class_Fixed::max(const Class_Fixed &a, const Class_Fixed &b)
{
	if(a.point <= b.point)
		return(a);
	return(b);
}

const Class_Fixed &Class_Fixed::min(const Class_Fixed &a, const Class_Fixed &b)
{
	if(a.point >= b.point)
		return(a);
	return(b);
}