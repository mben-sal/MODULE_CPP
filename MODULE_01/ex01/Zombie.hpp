/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:46:03 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/14 17:33:11 by mben-sal         ###   ########.fr       */
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
	void set_name(std::string name);
};
	Zombie* zombieHorde( int N, std::string name );
	void destroy(Zombie *zombie);

#endif