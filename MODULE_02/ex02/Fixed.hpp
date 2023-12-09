/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:24:09 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/22 18:09:58 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Class_Fixed
{
private:
	static const int r = 8;
	int point;
public:
	Class_Fixed();
	Class_Fixed(const Class_Fixed &autre);
	Class_Fixed(const int a);
	Class_Fixed(const float b);
	int toInt(void) const;
	float toFloat(void) const;
	
	void setRawBits(int const r);
	int getRawBits(void) const;
	~Class_Fixed();
	Class_Fixed& operator= (const Class_Fixed& a);
	Class_Fixed operator+ (const Class_Fixed a);
	Class_Fixed operator- (const Class_Fixed a);
	Class_Fixed operator/ (const Class_Fixed a);
	Class_Fixed operator* (const Class_Fixed a);
	bool operator!= (const Class_Fixed a);
	bool operator== (const Class_Fixed a);
	bool operator<= (const Class_Fixed a);
	bool operator>= (const Class_Fixed a);
	bool operator> (const Class_Fixed a);
	bool operator< (const Class_Fixed a);
	Class_Fixed	operator++ (int);
	Class_Fixed	operator-- (int);
	Class_Fixed	operator++ ();
	Class_Fixed	operator-- ();
	static Class_Fixed const &max(const Class_Fixed &a, const Class_Fixed &b);
	static Class_Fixed const &min(const Class_Fixed &a, const Class_Fixed &b);
};
std::ostream & operator << (std::ostream &a, const Class_Fixed &b);

#endif