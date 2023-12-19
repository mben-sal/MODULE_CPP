/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:24:09 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/19 19:43:29 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int r;
	int point;
public:
	Fixed();
	Fixed(const Fixed &autre);
	Fixed(const int a);
	Fixed(const float b);
	int toInt(void) const;
	float toFloat(void) const;
	
	void setRawBits(int const r);
	int getRawBits(void) const;
	~Fixed();
	Fixed& operator= (const Fixed& a);
	Fixed operator+ (const Fixed a);
	Fixed operator- (const Fixed a);
	Fixed operator/ (const Fixed a);
	Fixed operator* (const Fixed a);
	bool operator!= (const Fixed a);
	bool operator== (const Fixed a);
	bool operator<= (const Fixed a);
	bool operator>= (const Fixed a);
	bool operator> (const Fixed a);
	bool operator< (const Fixed a);
	Fixed	operator++ (int);
	Fixed	operator-- (int);
	Fixed	operator++ ();
	Fixed	operator-- ();
	static Fixed const &max(const Fixed &a, const Fixed &b);
	static Fixed const &min(const Fixed &a, const Fixed &b);
	static Fixed const &min(Fixed &a,  Fixed &b);
	static Fixed const &max(Fixed &a,  Fixed &b);
};
std::ostream & operator << (std::ostream &a, const Fixed &b);

#endif