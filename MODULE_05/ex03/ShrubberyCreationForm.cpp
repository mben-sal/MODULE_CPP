/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:27:59 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/02 14:51:37 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Default Constructor Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :  Form("Shrubbery", 0,145, 137),target(target)
{
	std::cout << "ShrubberyCreationForm Constructor With Parameter Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj), target(obj.target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if(this != &obj)
		*this = obj;
	return *this;
}
const char* ShrubberyCreationForm::filecantCreate::what() const throw()
{
	return ("ShrubberyCreationFormException: A Problem Happened While Creating The File");
}
void ShrubberyCreationForm::action() const
{
	std::ofstream  File;
	
	File.open(target + "Shrubbery");
	
	if(!File.is_open() || File.bad())
		throw ShrubberyCreationForm::filecantCreate();
	File << "          .     .  .      #     .      .          .		\n";
	File << "     .       .      .     #       .           .			\n";
	File << "        .      .         ###            .      .      .	\n";
	File << "      .      .   '#:. .:##'##:. .:#'  .      .				\n";
	File << "          .      . '####'###'####'  .						\n";
	File << "       .     '#:.    .:#'###'#:.    .:#'  .        .      .\n";
	File << "  .             '#########'#########'        .        .	\n";
	File << "        .    '#:.  '####'###'####'  .:#'   .       .		\n";
	File << "     .     .  '#######''##'##''#######'                  .	\n";
	File << "                .'##'#####'#####'##'           .      .	\n";
	File << "    .   '#:. ...  .:##'###'###'##:.  ... .:#'     .		\n";
	File << "      .     '#######'##'#####'##'#######'      .     .		\n";
	File << "    .    .     '#####''#######''#####'    .      .			\n";
	File << "            .     '      000      '    .     .				\n";
	File << "       .         .   .   000     .        .       .		\n";
	File << ".. .. ..................O000O........................ .....\n";
	std::cout << target + "_shrubbery outfile created" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}