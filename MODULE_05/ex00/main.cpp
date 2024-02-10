/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 13:58:15 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/10 16:10:17 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat e;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}