/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 11:02:46 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/09 11:45:19 by mben-sal         ###   ########.fr       */
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

unsigned int		Span::shortestSpan() const {
	if (this->_vec.size() <= 1)
		throw NoSpan();
	else
		return (*std::min_element(this->_vec.begin(), this->_vec.end()));
}


unsigned int	Span::longestSpan() const {
	if (this->_vec.size() <= 1)
		throw Span::NoSpan();
	else
		return (*std::max_element(this->_vec.begin(), this->_vec.end()));
}

const char* Span::NoSpan::what() const throw()
{
	return ("SPANEXCEPTION: There are No Numbers Stored, or Only One!");
}

const char* Span::NoSpaceLeft::what() const throw()
{
	return ("SPANEXCEPTION: No Space Left!");
}