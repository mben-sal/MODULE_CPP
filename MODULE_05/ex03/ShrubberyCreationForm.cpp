/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:27:59 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/18 16:32:02 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm() Form("default", 0,145, 137), target("test")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("Shrubbery", 0,145, 137), target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : target(obj.target)
{
	*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &execute) const
{
	if(!this->getIsSigned() && (execute.getGrade() > this->getgradeExecute()))
		throw ShrubberyCreationForm::cantexec();
	try
	{
		std::string fileName;
		fileName = this->target;
		fileName.append("Shrubbery");
		std::ofstream out(fileName);
		if(out.fail())
		{
			throw ShrubberyCreationForm();
		}
		out << tree;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
const std::string ShrubberyCreationForm::getTarget() const
{
	return (target);
}
const char* ShrubberyCreationForm::creationfailed::what() const throw()
{
	return("==> file creation failed");
}

const char* ShrubberyCreationForm::cantexec::what() const throw()
{
	return("can not execute");
}