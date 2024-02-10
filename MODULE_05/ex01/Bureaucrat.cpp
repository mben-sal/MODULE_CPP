/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:35:32 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/10 17:38:52 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("manar")
{
	std::cout << "Bureaucrat Default Constructor Called" << std::endl;
	
}
Bureaucrat::Bureaucrat(const std::string name) : _name(name)
{
	std::cout << "Bureaucrat param Constructor Called" << std::endl;
	srand(time(NULL));
	this->_grade = rand()%(150)+1;
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat param Constructor Called" << std::endl;
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &s)
{
	std::cout << "copy constructeur called" << std::endl;
	this->_grade = s._grade;
}
const std::string Bureaucrat::getName() const
{
	return(this->_name);
}
int Bureaucrat::getGrade() const
{
	return (this->_grade);
}
void Bureaucrat::decrement(void)
{
	this->_grade++;
	if(this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
void Bureaucrat::increment(void)
{
	this->_grade--;
	if(this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return("=> Too High");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("=> Too Low");
}
Bureaucrat::~Bureaucrat()
{
	 std::cout << "Destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &s)
{
	std::cout << "copy assignment operator called" << std::endl;
	if(this == &s)
		return *this;
	Bureaucrat *a = new Bureaucrat (s._name, s._grade);
	return *a;
}

std::ostream & operator<<(std::ostream &print, const Bureaucrat &n)
{
	print << n.getName() + "grade" << n.getGrade();
	return(print);
}