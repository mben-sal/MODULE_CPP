/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:45:01 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/06 10:58:10 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int>number(150);
	int *m = new int[150];
	srand(time(NULL));
	for(int i = 0; i < 150 ; i++)
	{
		const int valeur = rand();
		number[i] = valeur;
		m[i] = valeur;
	}
	Array<int> b = number;
	Array<int> test(b);
	for(int i = 0; i < 150 ; i++)
	{
		if(m[i] != number[i])
		{
			std::cerr<< "didn't save" << std::endl;
			return 1;
		}
	}
	try
	{
		number[-5] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		number[150] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
}