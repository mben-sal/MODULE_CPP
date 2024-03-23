/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:54:18 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/23 16:22:34 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	std::stack<double> u;
	
	if(ac != 2)
	{
		std::cout << "Error: nombre des arguments" << std::endl;
		exit(0);
	}
	check_number(ac, av);
	for (size_t i = 0; av[1][i]; i++)
	{
		if (isdigit(av[1][i]) && isdigit(av[1][i + 1]))
		{
			u.push(av[1][i] - '0');
			u.push(av[1][i + 1] - '0');
			i++;
		}
		else if (isdigit(av[1][i]) && !isdigit(av[1][i + 1]))
			u.push(av[1][i] - '0');
		else if (av[1][i] == '/' || av[1][i] == '*' || av[1][i] == '+' || av[1][i] == '-')
			execute(&u, av[1][i]);
	}
	if (u.size() == 1)
		std::cout << u.top() << std::endl;
	else
	{
		std::cout << "Error" << std::endl;
		exit(0);
	}
}