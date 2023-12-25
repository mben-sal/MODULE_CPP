/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:53:53 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 14:25:26 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &a);
	virtual ~Animal();
	Animal &operator=(const Animal &a);
	std::string get_type(void) const;
	virtual void makeSound()const;
};

#endif