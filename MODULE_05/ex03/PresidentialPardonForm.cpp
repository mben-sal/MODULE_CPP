/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:25:58 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/18 16:26:38 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("default", 0, 25, 5), targit("teste")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 0, 25, 5), targit(targit)
{	
}
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::string << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): targit(obj.targit)
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}

PresidentialPardonForm::getTarget() const
{
	return (targit);
}

PresidentialPardonForm::execute(Bureaucrat const &execute) const
{
	if(!this->getIsSigned() && (execute.getGrade() > this->getgradeExecute()))
		throw PresidentialPardonForm::cantexec();
	else 
		std::cout << targit <<  "has ben pardoned by zaphod Beeblebrox" << std::endl;
}

const char* PresidentialPardonForm::cantexec::what() const throw()
{
	return ("==> can not execute");
}