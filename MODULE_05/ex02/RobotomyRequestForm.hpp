/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:34:32 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/17 14:10:13 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H 
#define ROBOTOMY_REQUEST_FORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	const std::string target;	
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &obj);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
	~RobotomyRequestForm();
	const std::string getTarget()const;
	void execute(Bureaucrat const &execute ) const;
	class cantexec : public std::exception
	{
		const char *what() const throw();
	};
};

#endif