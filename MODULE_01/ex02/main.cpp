/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:21:02 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/10 16:28:54 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <ctype.h>
#include <unistd.h>


int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "-----------THE MEMORY ADRESS------------" << std::endl;
	std::cout << &str << std::endl;
	std::cout <<stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << "-----------THE VALUE--------------------" << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}