/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:24:05 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/21 20:07:03 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"
const int Fixed::r = 8;

Fixed::Fixed(/* args */)
{
	this->point = 0;
}

Fixed::Fixed(const Fixed& b)
{
	*this = b;
}

Fixed &Fixed::operator=(const Fixed& a)
{
	if(this == &a)
		return *this;
	this->point = a.getRawBits();
	return(*this);
}

std::ostream &operator<< (std::ostream &a, const Fixed &b)
{
	a << b.toFloat();
	return(a);
}
int Fixed::toInt(void) const
{
	return ((int)this->point >> this->r);
}

float Fixed::toFloat(void) const
{
	return ((float)this->point / (1 << this->r));
}
void Fixed::setRawBits(int const r)
{
	this->point = r;
}
int Fixed::getRawBits(void)const
{
	return(this->point);
}
Fixed::~Fixed()
{
}
Fixed::Fixed(const int q)
{
	this->point = q << this->r;
}

Fixed::Fixed( const float b)
{	
	this->point = roundf(b * (1 << this->r));
}
Fixed Fixed::operator+(const Fixed a)
{
	Fixed b;

	b.setRawBits(this->point + a.point);
	return(b);
}
Fixed Fixed::operator-(const Fixed a)
{
	Fixed b;

	b.setRawBits(this->point - a.point);
	return(b);
}

Fixed Fixed::operator*(const Fixed a)
{
	Fixed b(this->toFloat() * a.toFloat());
	return(b);
}

Fixed Fixed::operator/ (const Fixed a)
{
	Fixed b(this->toFloat() / a.toFloat());
	return(b);
}

bool Fixed::operator!= (const Fixed a)
{
	if(this->point != a.point)
		return true;
	return false;
}

bool Fixed::operator== (const Fixed a)
{
	if(this->point == a.point)
		return true;
	return false;
}

bool Fixed::operator< (const Fixed a)
{
	if(this->point < a.point)
		return true;
	return false;
}
bool Fixed::operator> (const Fixed a)
{
	if(this->point > a.point)
		return true;
	return false;
}

bool Fixed::operator<= (const Fixed a)
{
	if(this->point <= a.point)
		return true;
	return false;
}

bool Fixed::operator>= (const Fixed a)
{
	if(this->point >= a.point)
		return true;
	return false;
}

Fixed Fixed::operator-- (int)
{
	Fixed b;
	
	b.point = point--;
	return(b);
}

Fixed Fixed::operator++ (int)
{
	Fixed b;

	b.point = point++;
	return(b);
}

Fixed Fixed::operator-- ()
{
	Fixed b;
	
	b.point = --point;
	return(b);
}

Fixed Fixed::operator++ ()
{
	Fixed b;

	b.point = ++point;
	return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a.point >= b.point)
		return(a);
	return(b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a.point >= b.point)
		return(a);
	return(b);
}

const Fixed &Fixed::min(Fixed &a,  Fixed &b)
{
	if(a >= b)
		return(a);
	return(b);
}
const Fixed &Fixed::max(Fixed &a,  Fixed &b)
{
	if( a <= b)
		return(a);
	return(b);
}