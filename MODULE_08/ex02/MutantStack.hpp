/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:10:17 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/15 18:04:36 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUSTANTSTACK_HPP
# define MUSTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <class Type, class Container = std::deque<Type> >
class MutantStack : public std::stack<Type, Container>
{
	private:
	public:
		MutantStack() : std::stack<Type, Container>() {};
		~MutantStack() {};
		MutantStack & operator = (const MutantStack & rhs)
		{
			if (this == &rhs )
				return (*this);
			this->c = rhs.c;
			return (*this);
		}
		typedef typename std::stack<Type, Container>::container_type::iterator iterator;
		iterator begin() {
			return this->c.begin();
		}
		iterator end() {
			return this->c.end();
		}
		// void add(Type value)
		// {
		// 	this->c.push_back(value);
		// }
};

#endif
