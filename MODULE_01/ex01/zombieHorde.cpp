/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:50:00 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 18:23:30 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i = 0;
	Zombie *zom = new Zombie[N];
    
	while(i < N)
	{
		zom[i].set_name(name);
		i++;
	}
	return(zom);
}