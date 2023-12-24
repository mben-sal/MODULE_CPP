/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:13:05 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/24 14:29:15 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cmath>

class ClapTrap
{
private:
	std::string name_point;
	int hit_point;
	int energy_point;
	int attack_point;
public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap& b);
	void attack(const std::string &targit);
	void takedamage(unsigned int amount);
	void beRepaire(unsigned int amount);
	ClapTrap& operator=(const ClapTrap &a);
};



#endif
