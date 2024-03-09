/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:50:23 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/08 10:28:06 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include"iostream"

template <typename T>

void swap(T &x, T&y)
{
	T z = x;
	x = y;
	y = z;
}

template<typename T>
T &min(T &x, T &y)
{
	if(x > y)
		return x;
	return y;
}

template <typename T>

T &max(T &x, T &y)
{
	if(x < y)
		return x;
	return y;
}

#endif