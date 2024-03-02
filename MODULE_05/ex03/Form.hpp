/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:52:43 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/01 12:25:52 by mben-sal         ###   ########.fr       */
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
	void execute(Bureaucrat const &executor) const;
	virtual void action() const = 0;
	void beSigned(Bureaucrat &B);
	const std::string getName() const;
	bool getIsSigned() const;
	int getgradeSign() const;
	int getgradeExecute() const;
	class FormNotSigned : public std::exception
    {
    	private:
			std::string _errorMessage;
		public:
			FormNotSigned(std::string const &errorMessage);
			~FormNotSigned() throw();
			const char *what() const throw();
    };
};
std::ostream & operator << (std::ostream &print, const Form &f);


#endif