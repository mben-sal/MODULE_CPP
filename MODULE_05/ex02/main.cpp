/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:31:38 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 13:23:16 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat bu;    
    try
    {
        bu = Bureaucrat("manar", 148);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    Form *S = new ShrubberyCreationForm("lihoud");
    Form *p = new PresidentialPardonForm("mirikan");
    Form *R = new RobotomyRequestForm("clap");
    
    try
    {
        S->execute(bu);
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    try
    {
        p->execute(bu);
    }
    catch(const std::exception& e)
	{
        std::cerr << e.what() << '\n';
    }
    try
    {
        R->execute(bu);
    }
    catch(const std::exception& e)
	{
        std::cerr << e.what() << '\n';
    }
}
