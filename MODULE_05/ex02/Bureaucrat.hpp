/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:27:20 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 10:26:23 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <cstdlib>   // for srand and rand
#include <ctime>  // for time
#include "Form.hpp"

class Form; 
class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string name);
	Bureaucrat(const Bureaucrat &s);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	const std::string getName() const;
	int getGrade() const;
	void increment(void);
	void decrement(void);
	Bureaucrat &operator=(const Bureaucrat& s);
	class GradeTooHighException : public std::exception
	{
		public:
		GradeTooHighException();
		~GradeTooHighException() throw();
		
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException();
			~GradeTooLowException() throw();
		
		const char *what() const throw();
	};
	void signeForm(Form& form);
	void executeForm(Form const &form);
};
std::ostream & operator << (std::ostream &print, const Bureaucrat &f);
#endif