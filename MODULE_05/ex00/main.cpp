/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:58:15 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/25 20:25:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat i("ilyass", 151);
		std::cout << i << std::endl;
		i.increment();
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// try
	// {
	// 	Bureaucrat b("bilal", -5);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }try
	// {
	// 	Bureaucrat c("cherry", 1666);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
}