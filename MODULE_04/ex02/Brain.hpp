/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:02:53 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/26 17:39:48 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &a);
	Brain& operator=( const Brain &a);
};

#endif