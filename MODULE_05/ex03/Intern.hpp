/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:24:56 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 16:47:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Form;

class Intern {
public:
Intern();
Intern(const Intern &obj);
Intern &operator=(const Intern& obj);
~Intern();
Form* makeForm(const std::string FormName, const std::string targetName);
Form* ShrubberyCreation( std::string target);
Form* RobotomyRequest( std::string target );
Form* PresidentialPardon( std::string target );
class FormNotFound : public std::exception
{
	virtual const char *what() const throw();
};

};

#endif