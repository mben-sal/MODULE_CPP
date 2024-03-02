/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intren.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:25:20 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 16:48:16 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor Called\n";
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
	std::cout << "Intern Destructor Called\n" << std::endl;
}


Form*	Intern::ShrubberyCreation(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form* Intern::RobotomyRequest( std::string target ) {
	return (new RobotomyRequestForm(target));
}

Form* Intern::PresidentialPardon( std::string target ) {
	return (new PresidentialPardonForm(target));
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
		return (new PresidentialPardonForm (targetName));  
		break;
	default:
		throw Intern::FormNotFound();
		break;
	}
}

const char* Intern::FormNotFound::what() const throw()
{
	return("==> Can not make form");
}