/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:55:28 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/04 18:53:38 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include"iostream"
#include"iomanip"


class Base
{
	public :
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
