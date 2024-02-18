/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:26:50 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/18 16:26:53 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_H 
#define PRESIDENTIAL_PARDON_FORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string targit;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const std::string &obj);
	~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
	const std::string getTarget() const;
	void execute(Bureaucrat const &execute ) const;
	class cantexec : public std::exception
	{
		const char *what() const throw();
	};
};

#endif