/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:58:39 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/25 15:37:59 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal	
{
	private:
		Brain *C_Brain;
	public:
		Cat(/* args */);
		~Cat();
		void makeSound() const;
		Cat &operator=(const Cat &a);
		Cat(const Cat &a);
		std::string get_type(void);
};



#endif