/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:40:33 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 11:19:50 by mben-sal         ###   ########.fr       */
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
	Animal(const std::string type);
	Animal(const Animal &a);
	virtual ~Animal();
	Animal &operator=(const Animal &a);
	void set_type(std::string type);
	std::string get_type(void) const;
	virtual void makeSound()const;
};


#endif
