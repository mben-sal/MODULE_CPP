/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:31:38 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/03 10:24:33 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    int n = 5;
    Form *form[n];
    for (int i = 0; i < n; i++) {
        form[i] = nullptr;
    }
    try {
        Bureaucrat Burecrt("Manar ", 10);

        form[0] = new PresidentialPardonForm("Najwa");
        form[1] = new RobotomyRequestForm("Manar");
        form[2] = new ShrubberyCreationForm("Ola");

        std::cout << std::endl;
        std::cout << "bureaucrat : " << Burecrt << std::endl;
        std::cout << "form[0] : " << *form[0] << std::endl;
        std::cout << "form[1] : " << *form[1] << std::endl;
        std::cout << "form[2] : " << *form[2] << std::endl;
        std::cout << std::endl;

        std::cout << "->execute Forms" << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to sign " << (*form[0]).getName() << "  ********" << std::endl;
        Burecrt.signeForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to sign " << (*form[1]).getName() << "  ********" << std::endl;
        Burecrt.signeForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to sign " << (*form[2]).getName() << "  ********" << std::endl;
        Burecrt.signeForm(*form[2]);

        std::cout << std::endl
                  << "->execute Forms" << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to execute " << (*form[0]).getName() << "  ********" << std::endl;
        Burecrt.executeForm(*form[0]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to execute " << (*form[1]).getName() << "  ********" << std::endl;
        Burecrt.executeForm(*form[1]);

        std::cout << std::endl;
        std::cout << "******** " << Burecrt.getName() << " try to execute " << (*form[2]).getName() << "  ********" << std::endl;
        Burecrt.executeForm(*form[2]);

    }
    catch (const std::exception &e) {
        std::cout << "main catch : ";
        std::cout << e.what() << std::endl;
    }
    
    // delete form[0];
    // delete form[1];
	// delete form[2];
    return 0;
}
// int main()
// {
//     Bureaucrat bu;    
//     try
//     {
//         bu = Bureaucrat("manar", 15);
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     Form *S = new ShrubberyCreationForm("lihoud");
//     Form *p = new PresidentialPardonForm("mirikan");
//     Form *R = new RobotomyRequestForm("clap");
    
//     try
//     {
//         S->execute(bu);
//     }
//     catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

//     try
//     {
//         p->execute(bu);
//     }
//     catch(const std::exception& e)
// 	{
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         R->execute(bu);
//     }
//     catch(const std::exception& e)
// 	{
//         std::cerr << e.what() << '\n';
//     }
// }
