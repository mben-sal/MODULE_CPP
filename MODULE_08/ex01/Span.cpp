/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:02:46 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/21 17:07:05 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int n) : _N(n) {}

Span::Span(Span const &a)
{
	*this = a;
}

Span& Span::operator= (Span const &a)
{
	_N = a._N;
	_vec = a._vec;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(unsigned int num)
{
	if (_vec.size() < _N)
		_vec.push_back(num);
	else
		throw NoSpaceLeft();
}

unsigned int  Span::shortestSpan() const
{
	if (this->_vec.size() < 2)
		throw std::runtime_error("No span can be found. Insufficient data.");
	int shortestSpan = std::numeric_limits<int>::max();
	for (size_t i = 0; i < this->_vec.size() - 1; ++i)
	{
		for (size_t j = i + 1 ; j < this->_vec.size() ; ++j)
		{
			int span = std::abs(this->_vec[j] - this->_vec[i]);
			if (span < shortestSpan)
				shortestSpan = span;
		}
	}
	return (shortestSpan);
}

unsigned int  Span::longestSpan() const
{
	if (this->_vec.size() < 2)
		throw std::runtime_error("No span can be found. Insufficient data.");
	int longestSpan = std::numeric_limits<int>::min();
	for (size_t i = 0; i < this->_vec.size() - 1; ++i)
	{
		for (size_t j = i + 1 ; j < this->_vec.size(); ++j)
		{
			int span = std::abs(this->_vec[j] - this->_vec[i]);
			if (span > longestSpan)
				longestSpan = span;
		}	
	}
	return (longestSpan);
}

const char* Span::NoSpan::what() const throw()
{
	return ("SPANEXCEPTION: There are No Numbers Stored, or Only One!");
}

const char* Span::NoSpaceLeft::what() const throw()
{
	return ("SPANEXCEPTION: No Space Left!");
}