/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:28:36 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 14:51:54 by mben-sal         ###   ########.fr       */
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
  
  	class filecantCreate : public std::exception
	{
		const char *what() const throw();
	};
	void action() const;
};

#endif
