/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:34:38 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/23 13:54:22 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac , char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	std::map<std::string, float> container;
	std::string csv = "data.csv";
	std::string file = av[1];
	try
	{
		read_map(container, csv);
		read_input(file, container);
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << "erreur execute " << e.what() << '\n';
	}
	
}