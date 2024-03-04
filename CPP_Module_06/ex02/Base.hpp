/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:13:09 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/03 16:26:42 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdint>
class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{
	public:
		~A();	
};

class B : public Base
{
	public:
		~B();	
};

class C : public Base
{
	public:
		~C();	
};

#endif