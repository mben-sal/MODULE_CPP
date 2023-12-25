/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:10:29 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 14:17:36 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include"./Animal.hpp"
#include <iostream>
#include <string>

class WrongAnimal 
{
	protected:
		std::string _type;
	public:
		~WrongAnimal();
		WrongAnimal();
		WrongAnimal(const WrongAnimal &a);
		WrongAnimal(std::string type);
		WrongAnimal &operator=(const WrongAnimal &a);
		void set_WrongAnimal(std::string w_type);
		std::string get_WrongAnimal(void) const;
		void makesound(void)const;
};



#endif