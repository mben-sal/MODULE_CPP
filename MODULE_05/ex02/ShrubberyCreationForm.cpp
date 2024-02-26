/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:10:26 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/26 19:21:28 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("default", 0,145, 137), target("Undifined")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :  Form("Shrubbery", 0,145, 137),target(target)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned() && (executor.getGrade() > this->getgradeExecute()))
		throw ShrubberyCreationForm::cantexec();
	try
	{
		std::string		fileName;
		fileName = this->target;
		fileName.append("_shrubbery");
		std::ofstream	out(fileName);
		if (out.fail()){
			throw ShrubberyCreationForm::creationfailed();}
		out << 3 ;
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
	return("\033[31mFile creation failed\033[0m");
}

const char* ShrubberyCreationForm::cantexec::what() const throw()
{
	return("\033[31mCan not execute\033[0m");
}
