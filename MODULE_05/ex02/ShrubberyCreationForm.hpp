/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 14:10:31 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/18 12:51:50 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERY_CREATION_FORM_H 
#define SHRUBBERY_CREATION_FORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	const std::string target;
	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm& obj);
	~ShrubberyCreationForm();
	const std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
	class creationfailed : public std::exception
	{
		const char *what() const throw();
	};
  
  class cantexec : public std::exception
	{
		const char *what() const throw();
	};

};

#endif
