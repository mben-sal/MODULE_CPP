/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:25:47 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/26 17:42:29 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &a)
{
	std::cout << "Brain assignation operator called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = a.ideas[i];
		i++;
	}
	return(*this);
}

Brain::Brain(const Brain &a)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = a;
}

Brain::~Brain()
{
	std::cout << "Animal destructor called" << std::endl;
}


