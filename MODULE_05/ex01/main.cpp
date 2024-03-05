/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:33:18 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/05 13:05:44 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// 	void l()
// {
// 	system("leaks Bureaucrat");
// }
int main()
{
	// atexit(l);
	try
	{
    	Bureaucrat bu = Bureaucrat("manar", 9);
    	std::cout << bu << std::endl;
    	Form f = Form("gene",false, 2, 90);
    	Form& fo = f;
    	std::cout << bu << std::endl;
    	std::cout <<  bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
    	bu.signeForm(fo);
	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
