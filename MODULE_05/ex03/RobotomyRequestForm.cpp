/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:27:11 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 14:50:59 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 0, 72,45),target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : target(obj.target)
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::action() const
{
	srand(time(NULL));
	int number = rand() % 2;
	if(number == 1)
		std::cout << this->target << " has been robot successfully"<< std::endl;
	else 
		std::cout << this->target << "has been failed to robot" << std::endl;
}