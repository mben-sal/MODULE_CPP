/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:28:55 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/26 18:16:51 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat; 

class Form
{
	const std::string name;
	bool is_signed;
	const int gradeSigne;
	const int GradeExecte;
	
	public:
	Form();
	Form(const std::string name , bool is, int m , int s);
	Form(const Form &obj);
	~Form();
	
	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	Form &operator=(const Form& obj);
	void beSigned(Bureaucrat &B);
	const std::string getName() const;
	bool getIsSigned() const;
	int getgradeSign() const;
	int getgradeExecute() const;
};
std::ostream & operator << (std::ostream &print, const Form &f);


#endif