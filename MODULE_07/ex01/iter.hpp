/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:20:53 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/05 15:45:37 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>

void iter(T *arr , size_t size, void(*f)(T const &valeur))
{
	size_t i;
	
	i = 0;
	while (i < size )
	{
		f(arr[i]);
		i++;
	}
	
}

template<typename T>

void print(T const &valeur)
{
	std::cout<< "= > " << valeur << " < =" <<std::endl;
}

#endif