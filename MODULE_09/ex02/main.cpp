/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:34:19 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/23 16:40:53 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::string str;
	PmergeMe obj;
	std::string input;
	if(ac <= 1)
	{
		std::cerr << "erreur input entrez une liste de nombres" << std::endl;
	}
	for (int i = 1; i < ac; i++)
	{
		str += av[i];
		if (i < ac - 1)
			str += " ";
	}
	input = str;
	try
	{
		obj.input(input);
		obj.FJohnson_deque();
		obj.FJohnson_vector();
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << e.what() << '\n';
	}
}