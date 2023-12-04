/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 21:52:39 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/03 14:44:14 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newzombie = new Zombie(name);
	std::cout << name << " : Created" <<std::endl;
	return (newzombie);
}