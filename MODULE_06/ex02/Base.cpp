/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:55:24 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/07 12:59:31 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

Base::~Base()
{
	std::cout << "Base Destructor Called\n";
}

A::~A()
{
	std::cout << "A Destructor Called\n";
}

B::~B()
{
	std::cout << "B Destructor Called\n";
}

C::~C()
{
	std::cout << "C Destructor Called\n";
}