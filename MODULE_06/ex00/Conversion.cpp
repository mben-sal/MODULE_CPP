/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:42:22 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/07 19:02:30 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Conversion.hpp"

Conversion::Conversion()
{
	
}

Conversion::Conversion(std::string str)
{
	this->str = str;
	this->print = 1;
	this->type = "non";
	this->getType();
}

Conversion::Conversion(const Conversion &str)
{
	*this = str;
}

Conversion::~Conversion()
{
	
}

Conversion &Conversion::operator=(Conversion const &a)
{
    this->_char = a._char;
    this->_double = a._double;
    this->_Float = a._Float;
    this->type = a.type;
    this->print = a.print;
    this->str = a.str;

    return *this;
}

void Conversion::getType()
{
	if (!this->str.compare("-inf") || !this->str.compare("+inf"))
	{
			// this->print_type();
			std::cout<<" char : impossible"<< std::endl;
			std::cout<<" double : impossible"<< std::endl;
			std::cout<<" float : impossible"<< std::endl;
			std::cout<<" int : impossible"<< std::endl;
	}
	else if (!this->str.compare("nan") || !this->str.compare("nanf"))
	{
		std::cout<<" char : impossible"<< std::endl;
		std::cout<<" double : impossible"<< std::endl;
		std::cout<<" float : nanf"<< std::endl;
		std::cout<<" int : nan"<< std::endl;
	}
	else
	{
		check_double();
		check_int();
		check_char();
		check_float();
		if(!this->type.compare("non"))
		{
			std::cout<<" char : impossible"<< std::endl;
			std::cout<<" double : impossible"<< std::endl;
			std::cout<<" float : impossible"<< std::endl;
			std::cout<<" int : impossible"<< std::endl;
		}
		else
		{
			this->cast();
			this->print_type();
		}
	}
}	

bool Conversion::check_char()
{
	if(str.length() != 1)
	{
		return(0);
	}
	this->type = "char";
	this->_char = str[0];
	this->print = 1;
	return(1);
}

bool Conversion::check_int()
{
	long double nbr;
	std::stringstream s(str);
	try
	{
		s >> nbr;
		if (s.fail() || nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min())
		{
			return(0);
			
		}
		else
		{
			this->_int = nbr;
			this->type = "int";
		}
		return(1);
	}
	catch(const std::exception& e)
	{
		print = 0;
		return(0);
	}
}
bool Conversion::check_float()
{
	float nbr;
	size_t i = 0;
	std::stringstream s(str);
	try
	{
		s >> nbr;
		this->_Float = nbr;
		if (s.fail() || nbr > std::numeric_limits<float>::max())
			return(0);
		if (i != str.length() - 1 || str.find('.') == std::string::npos || str.c_str()[i] != 'f')
			return (0);
		this->type = "float";
		return(1);
	}
	catch(const std::exception& e)
	{
		return(0);
	}
}

bool	Conversion::check_double() {
	long double nbr;
	size_t i = 0;
	std::stringstream s(str);
	try {
		s >> nbr;
		this->_double = nbr;
		if (s.fail() || nbr > std::numeric_limits<double>::max())
		{
			return(0);
		}
		if (i != str.length() || str.find('.') == std::string::npos || str.c_str()[i] != '\0')
			return (0);
		this->type = "double";
		return (1);
	}
	catch (const std::exception &e) {
		return (0);
	}
}
void Conversion::cast()
{
	if(this->type == "char")
		to_char();
	else if(this->type == "int")
		to_int();
	else if(this->type == "float")
		to_float();
	else if(this->type == "double")
		to_double();
}

void Conversion::to_char()
{
	this->_int = static_cast<int>(this->_char);
	this->_Float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}

void Conversion::to_double()
{
	if(print)
	{
		this->_char = static_cast<char>(this->_double);
		this->_int = static_cast<int>(this->_double);
	}
	this->_Float = static_cast<float>(this->_double);
}

void Conversion::to_float()
{
	if(print)
	{
		this->_int = static_cast<int>(this->_Float);
		this->_char = static_cast<char>(this->_Float);
	}
	this->_double = static_cast<double>(this->_Float);
}

void Conversion::to_int()
{
	
	this->_char = static_cast<char>(this->_int);
	this->_double = static_cast<double>(this->_int);
	this->_Float = static_cast<float>(this->_int);
}

void Conversion::print_type()
{
	this->print_char();
	this->print_double();
	this->print_float();
	this->print_int();
}

void Conversion::print_char()
{
	if(!print || this->_int < -128 || this->_int > 127)
		std::cout<< "char : impossible "<< std::endl;
	else if(this->_int > 126 || this->_int < 32 )
		std::cout << "char : non displayable "<< std::endl;
	else
		std::cout << "char : " << this->_char << std::endl;
}

void Conversion::print_double()
{

	 if(print == 0)
	{
		std::cout<<" impossible"<< std::endl;
	}
	else 
		std::cout<< "double : " << std::fixed << std::setprecision(1) << this->_double << std::endl;
}

void Conversion::print_float()
{
	
	if(print == 0)
	{
		std::cout<<" impossible"<< std::endl;
	}
	else
		std::cout << "float : " << std::fixed << std::setprecision(1) << this->_Float << "f "<< std::endl;
}

void Conversion::print_int()
{
	if(print == 0)
	{
		std::cout<<" int impossible"<< std::endl;
	}
	else
		std::cout << "int : " << this->_int << std::endl;
}