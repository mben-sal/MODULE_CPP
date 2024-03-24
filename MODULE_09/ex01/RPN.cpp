/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:54:32 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/24 16:27:35 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void check_number(int ac, char **av)
{
	(void)ac;
	for (size_t i = 0; av[1][i]; i++)
	{
		if (isdigit(av[1][i]) || av[1][i] == ' '  || av[1][i] == '/' || av[1][i] == '*' || av[1][i] == '+' || av[1][i] == '-')
			i++;
		else 
		{
			std::cout << " Error !" << std::endl;
			exit(0);
		}
	}
}

void execute(std::stack<double> *s, char c)
{
	if (s->size() >= 2)
	{
		double nb_tmp1 = s->top();
		s->pop();
		double nb_tmp2 = s->top();
		s->pop();
		if (c == '/')
		{
			if (!nb_tmp1)
			{
				std::cout << "  Error: !" << std::endl;
				exit(0);
			}
			s->push(nb_tmp2 / nb_tmp1);
		}
		else if (c == '*')
			s->push(nb_tmp1 * nb_tmp2);
		else if (c == '+')
			s->push(nb_tmp1 + nb_tmp2);
		else if (c == '-')
			s->push(nb_tmp2 - nb_tmp1);
	}
	else
	{
		std::cout << "Error: Not supported" << std::endl;
		exit(0);
	}
}