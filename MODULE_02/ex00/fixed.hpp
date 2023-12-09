/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:10:36 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/21 11:44:57 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class fixed
{
private:
	static const int r = 8;
	int point;
public:
	fixed();
	fixed(const fixed &autre);
	fixed& operator= (const fixed& a);
	~fixed();
	void setRawBits(int const r);
	int getRawBits(void) const;
};

#endif