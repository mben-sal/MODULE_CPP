/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:35:07 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/17 19:17:53 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac , char **av)
{
	Harl level;
	if (ac == 2)
		level.complain(av[1]);
	else
		std::cout << "[ you don't have any input ]" << std::endl;
}