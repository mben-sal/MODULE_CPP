/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:30:43 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/29 13:31:56 by mben-sal         ###   ########.fr       */
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
		std::string get_WrongAnimal(void) const;
		void makesound(void)const;
};



#endif