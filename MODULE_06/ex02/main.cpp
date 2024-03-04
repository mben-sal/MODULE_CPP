/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:55:31 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/04 19:34:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Base.hpp"

Base* generate(void)
{
	srand(time(NULL));
	
	int var = rand() % 3;
	std::cout<< "numbre" << var << std::endl;
	if(var == 0)
		return(new A);
	else if(var == 1)
		return(new B);
	else 
		return(new C);
}

void identify(Base* p)
{
	A *ptr_a = dynamic_cast<A*>(p);

	if(ptr_a == nullptr)
	{
		std::cout<< "A" << std::endl;
		return;
	}
	B *ptr_b = dynamic_cast<B*>(p);
	if(ptr_b == nullptr)
	{
		std::cout << "B" << std::endl;
		return;
	}
	C *ptr_c = dynamic_cast<C*>(p);
	
	if(ptr_c == nullptr)
	{
		std::cout<< "C" << std::endl;
		return;
	}
}

void identify(Base& p)
{
	try
	{
		A &ref_a = dynamic_cast<A&>(p);
		(void)ref_a;
		std::cout<< "A"<< std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		B &ref_b = dynamic_cast<B&>(p);
		(void)ref_b;
		std::cout<< "B" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C &ref_c = dynamic_cast<C&>(p);
		(void)ref_c;
		std::cout<< "C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	
}

int main()
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);

	delete ptr;
	return 0;
}