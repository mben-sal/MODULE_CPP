/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:10:36 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/19 18:35:54 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class fixed
{
private:
	static const int r ;
	int point;
public:
	fixed();
	fixed(const fixed &autre);
	~fixed();
	fixed& operator= (const fixed& a);
	void setRawBits(int const r);
	int getRawBits(void) const; // Cette fonction ne peut pas modifier les membres de l'objet
};

#endif