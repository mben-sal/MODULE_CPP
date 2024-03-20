/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:10:17 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/20 20:01:43 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUSTANTSTACK_HPP
# define MUSTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template < typename T>
class MutantStack : public std::stack<T>
{
	private :
		std::stack<T>  stack_;
	public :
		MutantStack() {};
		~MutantStack() {};
		typedef typename  std::deque<T>::iterator iterator;
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				this->c = other.c;
			return (*this);
		}
		iterator	begin(void) {return this->c.begin();}
		iterator	end(void){return this->c.end();}
};

#endif
