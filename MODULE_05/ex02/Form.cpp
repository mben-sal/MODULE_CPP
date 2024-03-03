/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:28:41 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 20:25:16 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("default"), is_signed(1), gradeSigne(1), GradeExecte(1)
{}

Form::Form(const Form &obj) : name(obj.name), is_signed(obj.gradeSigne),gradeSigne(obj.gradeSigne), GradeExecte(obj.GradeExecte)
{
}

Form::Form(const std::string name , int m , int s) : name(name), is_signed(false), gradeSigne(m), GradeExecte(s)
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

Form& Form::operator=(const Form & obj)
{
    std::cout << "Form copy assignment called\n";
    
    if (this != &obj) 
    {
        this->name = obj.name;
        this->is_signed = obj.is_signed;
    }

    return *this;
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
	return this->GradeExecte;
}
void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getgradeSign())
		this->is_signed = 1;
	else 
		throw (Form::GradeTooHighException());
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
	std::cout << "GradeTooLowException Destructor Called\n";
}
void Form::execute(Bureaucrat const &a) const
{
	if(!this->is_signed)
		throw FormNotSigned("the Form " + this->name + " not signed" );
	if(a.getGrade() >= this->getgradeSign())
		throw GradeTooLowException(a.getName() + " grade is too low to sign " + name);
	this->action();
}
Form::GradeTooLowException::GradeTooLowException() {
	std::cout << "GradeTooLowException Default Constructor Called\n";
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
	std::cout << "GradeTooHighException Destructor Called\n";
}
Form::GradeTooHighException::GradeTooHighException() {
	std::cout << "GradeTooHighException Default Constructor Called\n";
}

Form::GradeTooHighException::GradeTooHighException(std::string const &error) :errorMessage(error) {
}

Form::GradeTooLowException::GradeTooLowException(std::string const &error) :errorMessage(error) {
}


Form::FormNotSigned::FormNotSigned(std::string const &errorMessage) : _errorMessage(errorMessage) {
}

const char *Form::FormNotSigned::what() const throw() {
	return (_errorMessage.c_str());
}

Form::FormNotSigned::~FormNotSigned() throw() {
}

Form::FormNotSigned::FormNotSigned()
{
}
std::ostream & operator << (std::ostream &print, const Form &f) {
	print << f.getName() << ", Form sign grade " << f.getgradeSign() << " with execute grade : " << f.getgradeExecute() << (f.getIsSigned() == 1 ? " signed" : " not Signed");
	return (print);
}