/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:05:01 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/26 17:40:13 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include"Animal.hpp"
#include"Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *D_Brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &a);
		Dog &operator=(const Dog &a);
		void makeSound() const;
};



#endif