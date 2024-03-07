/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:57:21 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/07 16:46:01 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Conversion.hpp"

int main(int ac, char **av)
{
	
	if(ac == 2)
		Conversion a(av[1]);
	else 
		std::cout<< "entre votre argument int ou char ..." << std::endl;
	return (0);
}