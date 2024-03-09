/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:58:18 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/09 11:41:39 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
#include <limits>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vec;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &a);
		Span& operator= (Span const &a);
		~Span();

		void			addNumber(unsigned int num);
		unsigned int	shortestSpan() const ;
		unsigned int	longestSpan() const ;

		class NoSpan: public std::exception
		{
			virtual const char* what() const throw();
		};

		class NoSpaceLeft: public std::exception
		{
			virtual const char* what() const throw();
	};
};

# endif