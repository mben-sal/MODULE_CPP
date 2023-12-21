/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:22:01 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/20 20:57:35 by mben-sal         ###   ########.fr       */
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
	Fixed& operator= (const Fixed& a);
	Fixed(const int a);
	Fixed(const float b);
	int toInt(void) const;
	float toFloat(void) const;
	~Fixed();
	void setRawBits(int const r);
	int getRawBits(void) const;
};
std::ostream &operator <<(std::ostream &p, const Fixed &f);

#endif