/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:11:04 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 11:21:56 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include"./Animal.hpp"

class Cat : public Animal	
{
	public:
		Cat(/* args */);
		~Cat();
		void makeSound()const;
		Cat &operator=(const Cat &a);
		Cat(const Cat &a);
		std::string get_type(void);
};



#endif
