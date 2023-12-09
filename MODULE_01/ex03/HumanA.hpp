/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:54:56 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/09 15:05:42 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

/* Includes */

# include <iostream>
# include <ostream>
# include "./Weapon.hpp"

class HumanA
{
	Weapon &clup;
	std::string name;
	public:
		HumanA();
		HumanA(std::string name , Weapon &clup);
		void attack();
		~HumanA();
};

#endif