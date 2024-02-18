/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:31:38 by mben-sal          #+#    #+#             */
/*   Updated: 2024/02/17 10:35:32 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bu = Bureaucrat("youssef", 9);
    std::cout << bu << std::endl;
    bu.increment();
    bu.increment();
    bu.increment();
    bu.increment();
    bu.increment();
    std::cout << "increment " << bu << std::endl;
    bu.decrement();
    bu.decrement();
    bu.decrement();
    bu.decrement();
    bu.decrement();
    bu.decrement();
    bu.decrement();
    bu.decrement();

    Form f = Form("gene",false, 1, 90);
    Form& fo = f;
    std::cout << bu << std::endl;
    std::cout <<  bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
    // bu.signeForm(fo);
}
