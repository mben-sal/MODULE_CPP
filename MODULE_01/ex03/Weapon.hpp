/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:08:52 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 19:50:57 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/* Includes */
#include <string>
#include <iostream>
#include <ctype.h>
#include <unistd.h>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	Weapon(/* args */);
	~Weapon();
	void setType(std::string tpye);
	const std::string& getType() ;
};

#endif

