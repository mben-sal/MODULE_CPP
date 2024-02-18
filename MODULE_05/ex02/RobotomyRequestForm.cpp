/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:31:17 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/17 14:09:32 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :Form("default", 0, 72, 45), target("test")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("Robot", 0, 72, 45), target(target);
{
	
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) :target(obj.target);
{
	*this = obj;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::string << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}

const std::string RobotomyRequestForm::getTarget()const
{
	return (target);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if ( !this->getIsSigned() && (executor.getGrade() > this->getgradeExecute()))
		throw RobotomyRequestForm::cantexec();
	else	
	{	
		srand(time(NULL));
    	int index = rand()%(10)+1;
		if(index % 2 == 0)
			std::cout << target << " has been robotomized" << std::endl;
	}
}