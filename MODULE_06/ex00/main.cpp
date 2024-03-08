/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:57:21 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/08 18:10:03 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Conversion.hpp"

int main(int ac, char **av)
{

	if(ac == 2) {
		std::string a = av[1];
		Conversion::Convert(a);
	}
	else 
		std::cout<< "entre votre argument int ou char ..." << std::endl;
	return (0);
}