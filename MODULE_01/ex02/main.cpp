/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:21:02 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 20:34:27 by mben-sal         ###   ########.fr       */
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
// 	std::cout << "-----------THE VALUE change ref--------------------" << std::endl;
// 	*stringPTR = "n9dar";
// 	std::cout << str << std::endl;
// 	std::cout << *stringPTR << std::endl;
// 	std::cout << stringREF << std::endl;
// 	std::cout << "-----------THE VALUE ptr--------------------" << std::endl;
// 	stringREF = "ha ana f ligne";
// 	std::cout << str << std::endl;
// 	std::cout << *stringPTR << std::endl;
// 	std::cout << stringREF << std::endl;
}