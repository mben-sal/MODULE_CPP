/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:34:19 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/24 22:06:45 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	std::string str;
	PmergeMe obj;
	if(ac <= 1)
	{
		std::cerr << "erreur input entrez une liste de nombres" << std::endl;
		exit(0);
	}
	for (int i = 1; i < ac; i++)
	{
		str += av[i];
		if (i < ac - 1)
			str += " ";
	}
	try
	{
		obj.input(str);
		obj.FJohnson_deque();
		obj.FJohnson_vector();
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << e.what() << '\n';
	}
}