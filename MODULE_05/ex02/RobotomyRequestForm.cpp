/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:31:17 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/26 18:30:22 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :  Form("Default", 0, 72, 45),target("Undifined")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("roboto", 0, 72,45),target(target)
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

const std::string RobotomyRequestForm::getTarget() const
{
	return (target);
}
const char* RobotomyRequestForm::cantexec::what() const throw()
{
	return("\033[31mCan not execute\033[0m");
}