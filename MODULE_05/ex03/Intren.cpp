/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intren.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:25:20 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/18 16:25:36 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &obj)
{
	*this = obj;
}

Intern &Intern::operator=(const Intern &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}

Intern::~Intern()
{
}

Form* Intern::makeForm(const std::string FormName, const std::string targetName)
{
	std::string FormType[3] = {"Shrubbery", "Robotomy", "Presidential"};
	int j = -1;
	int	i;

	i = 0;
	while (i < 3)
	{
		while (!FormName.compare(FormType[i]))
		{
			j = i;
			break ;
		}
		i++;
	}
	switch (j)
	{
	case 0:
		std::cout << "Intern creates Shrubbery" << std::endl;
		return (new ShrubberyCreationForm(targetName));  
		break;
	case 1:
		std::cout << "Intern creates Robotomy" << std::endl;
		return (new RobotomyRequestForm(targetName));  
		break;
	case 2:
		std::cout << "Intern creates Presidential" << std::endl;
		return (new PresidentialPardonForm(targetName));  
		break;
	default:
		throw Intern::cantmake();
		break;
	}
}

const char* Intern::cantmake::what() const throw()
{
	return("==> Can not make form");
}