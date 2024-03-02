/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:58:15 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/01 14:29:58 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat i("Manar", 152);
		std::cout << i << std::endl;
		i.increment();
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat bu;
	std::cout << bu << std::endl;
    std::cout <<  bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
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