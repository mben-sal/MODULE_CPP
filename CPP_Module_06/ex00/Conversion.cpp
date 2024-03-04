/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:47:41 by msaouab           #+#    #+#             */
/*   Updated: 2024/03/04 10:47:02 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Conversion.hpp"

Conversion::Conversion() {
}

Conversion::Conversion(const Conversion &a) {
	*this = a;
}

Conversion::Conversion(std::string str) {
	this->_str = str;
	this->p_int = true;
	this->getType();
}

Conversion& Conversion::operator= (Conversion const &a) {
	this->_type = a._type;
	this->_char = a._char;
	this->_int = a._int;
	this->_dbl = a._dbl;
	this->_flt = a._flt;
	this->p_int = a.p_int;
	return (*this);
}

Conversion::~Conversion() {
}

void	Conversion::getType() {
	if (!checkInt() && !checkChar() && !checkFloat() && !checkDouble())
	{
		std::cout << "\033[0;32m" << "arguments type unkown\n"<< "\033[0m";
		return ;
	}
	this->cast();
	this->printData();
}

bool	Conversion::checkChar() {
	if (_str.length() != 1) {
		return (false);
	}
	this->_type = "char";
	this->_char = _str[0];
	this->p_int = true;
	return (true);
}

bool	Conversion::checkInt() {
	size_t	i;

	try {
		this->_int = stoi(_str, &i);
		if (i != this->_str.length())
			return (false);
		this->_type = "int";
		return (true);
	}
	catch (const std::exception &e) {
		p_int = false;
		return (false);
	}
}

bool	Conversion::checkFloat() {
	size_t	i;

	try {
		this->_flt = stof(_str, &i);
		if (this->_str != "-inff" && this->_str != "+inff"  && this->_str != "nanf")
			if (i != _str.length() - 1 || _str.find('.') == std::string::npos || _str.c_str()[i] != 'f')
				return (false);
		this->_type = "float";
		return (true);
	}
	catch (const std::exception &e) {
		return (false);
	}
}

bool	Conversion::checkDouble() {
	size_t	i;

	try {
		this->_dbl = stod(_str, &i);
		if (this->_str != "-inf" && this->_str != "+inf"  && this->_str != "nan")
			if (i != _str.length() || _str.find('.') == std::string::npos || _str.c_str()[i] != '\0')
				return (false);
		this->_type = "double";
		return (true);
	}
	catch (const std::exception &e) {
		return (false);
	}
}

void	Conversion::cast() {
	if (this->_type == "char")
		to_Char();
	else if (this->_type == "int")
		to_Int();
	else if (this->_type == "float")
		to_Float();
	else if (this->_type == "double")
		to_Double();
}

void	Conversion::to_Char() {
	this->_int = static_cast<int>(this->_char);
	this->_flt = static_cast<float>(this->_char);
	this->_dbl = static_cast<double>(this->_char);
}

void	Conversion::to_Int() {
	this->_char = static_cast<char>(this->_int);
	this->_flt = static_cast<float>(this->_int);
	this->_dbl = static_cast<double>(this->_int);
}
void	Conversion::to_Float() {
	if (p_int)
	{
		this->_char = static_cast<char>(this->_flt);
		this->_int = static_cast<int>(this->_flt);
	}
	this->_dbl = static_cast<double>(this->_flt);
}

void	Conversion::to_Double() {
	if (p_int)
	{
		this->_char = static_cast<char>(this->_dbl);
		this->_int = static_cast<int>(this->_dbl);
	}
	this->_flt = static_cast<float>(this->_dbl);
}

void	Conversion::printData() {
	this->printChar();
	this->printInt();
	this->printFlt();
	this->printDbl();
}

void	Conversion::printChar() {
	if (!p_int || this->_int < -128 || this->_int > 127)
		std::cout << "\033[0;32m" << "char: 'impossible'" << "\n" << "\033[0m";
	else if (this->_int > 126 || this->_int < 32)
		std::cout << "\033[0;32m" << "char: Non displayable" << "\n" << "\033[0m";
	else
		std::cout << "\033[0;32m" << "char: '" << this->_char << "'\n" << "\033[0m";
}


void	Conversion::printInt() {
	if (!p_int)
		std::cout << "\033[0;32m" << "int: 'impossible'"<< "\n" << "\033[0m";
	else
		std::cout << "\033[0;32m" << "int: '" << this->_int << "'\n" << "\033[0m";
}

void	Conversion::printFlt() {
	std::cout << "\033[0;32m" << "float: '" << std::fixed << std::setprecision(1) << this->_flt << "f'\n" << "\033[0m";
}

void	Conversion::printDbl() {
	std::cout << "\033[0;32m" << "Double: '" << std::fixed << std::setprecision(1) << this->_dbl << "'\n" << "\033[0m";
}
