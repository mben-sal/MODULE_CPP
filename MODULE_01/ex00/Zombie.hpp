/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:03:16 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 18:15:37 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <ctype.h>
#include <unistd.h>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	Zombie(std::string _name);
	~Zombie();
	void annonce();
	
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif