/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:52:20 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/18 13:52:29 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), is_signed(0), gradeSigne(5), GradeExecte(5)
{}

Form::Form(const Form &obj) : name(obj.name), is_signed(obj.gradeSigne),gradeSigne(obj.gradeSigne), GradeExecte(obj.GradeExecte)
{
}

Form::Form(const std::string name , bool is, int m , int s) : name(name), is_signed(is), gradeSigne(m), GradeExecte(s)
{
	if(gradeSigne < 1 || GradeExecte < 1)
		throw Form::GradeTooHighException();
	if(gradeSigne > 150 || GradeExecte > 150)
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return("=> Too High");
}
const char *Form::GradeTooLowException::what() const throw()
{
	return("=> Too Low");
}

Form &Form::operator=(const Form &obj)
{
	if(this ==  &obj)
		return *this;
	Form *b = new Form(obj);
	return *b;
}

Form ::~Form()
{}
const std::string Form::getName() const
{
	return name;
}
bool Form::getIsSigned() const
{
	return is_signed;
}
 int Form::getgradeSign() const
{
	return gradeSigne;
}
 int Form::getgradeExecute() const
{	
	return gradeSigne;
}
void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getgradeSign())
		this->is_signed = 1;
	else 
		throw (Form::GradeTooHighException());
}
