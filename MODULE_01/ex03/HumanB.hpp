/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:54:47 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/03 12:34:52 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

/* Includes */

# include <iostream>
# include <ostream>
# include "./Weapon.hpp"


class HumanB
{
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &clup);
	void attack();
	~HumanB();
};





#endif
