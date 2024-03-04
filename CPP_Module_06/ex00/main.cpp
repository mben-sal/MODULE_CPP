/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:47:33 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/02 13:58:17 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Conversion.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
		Conversion	number(av[1]);
	else
		std::cout << "missing argument or more arguments entred\n";
	return (0);
}