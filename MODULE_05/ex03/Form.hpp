/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:52:43 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/05 12:22:41 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <iostream>
class Bureaucrat; 

class Form
{
	std::string name;
	bool is_signed;
	const int gradeSigne;
	const int GradeExecte;
	
	public:
	Form();
	Form(const std::string name , bool is, int m , int s);
	Form(const Form &obj);
	Form& operator=(Form const &a);
	virtual ~Form();
	
	class GradeTooHighException : public std::exception
	{
		private :
			std::string errorMessage;
		public :
			GradeTooHighException();
			GradeTooHighException(std::string const &error);
			~GradeTooHighException() throw() ;
			
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private:
			std::string	errorMessage;
		public:
			GradeTooLowException();
			GradeTooLowException(std::string const &error);
			~GradeTooLowException() throw() ;
			
			const char *what() const throw() ;
	};
	
	class FormNotSigned : public std::exception
	{
		private:
			std::string _errorMessage;
		public:
			FormNotSigned();
			FormNotSigned(std::string const &errorMessage);
			~FormNotSigned() throw();
			
			const char *what() const throw();
	};
	void beSigned(Bureaucrat &B);
	void execute(Bureaucrat const &a) const ;
	virtual void action() const = 0;
	const std::string getName() const;
	bool getIsSigned() const;
	int getgradeSign() const;
	int getgradeExecute() const;
};
std::ostream & operator << (std::ostream &print, const Form &f);


#endif