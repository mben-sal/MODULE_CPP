/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:58:15 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/05 12:44:58 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

// void l()
// {
// 	system("leaks Bureaucrat");
// }

int main()
{
	// atexit(l);
	try
	{
		Bureaucrat i("Manar", 160);

		i.decrement();
		i.decrement();
		i.decrement();
		std::cout <<i.getGrade() << std::endl;
		std::cout << i << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// try
	// {
	// 	Bureaucrat b("MOHAMED", -5);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }try
	// {
	// 	Bureaucrat c("NAJWA", 1666);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
}