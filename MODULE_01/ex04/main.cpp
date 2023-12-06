/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:22:06 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 20:17:19 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"sed.hpp"

int main(int ac , char **av)
{
	if(ac != 4)
	{
		std::cout << "error arguments!!" << std::endl;
		return(1);
	}
	else
	{
		sed replce(av[1]);
		replce.replace(av[2],av[3]);
		
	}
	return(0);
}