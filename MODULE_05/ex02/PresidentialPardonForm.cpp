/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 11:14:07 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/29 20:09:06 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :  Form("Default", 0, 25, 5),targit("Undifined")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardon", 0, 25,5),targit(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : targit(obj.targit)
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned() && (executor.getGrade() > this->getgradeExecute()))
		throw PresidentialPardonForm::cantexec();
	else	
		std::cout << targit << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

const std::string PresidentialPardonForm::getTarget() const
{
	return (targit);
}

const char* PresidentialPardonForm::cantexec::what() const throw()
{
	return("\033[31mCan not execute\033[0m");
}