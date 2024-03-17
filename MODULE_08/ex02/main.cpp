/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:11:15 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/15 18:05:38 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./MutantStack.hpp"

int main()
{	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << "mstack.top() = ";
	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "mstack.size() = ";
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	//[...]

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	int	i = 0;
	while (it != ite) {
		std::cout << "iterrator[" << i << "] = ";
		std::cout << *it << std::endl;
		++it;
		i++;
	}
	std::stack<int> s(mstack);
	/*************************************/
	// MutantStack<int> s(mstack);
	// s.add(900);
	// MutantStack<int>::iterator m = s.begin();
	// std::cout << "*it = ";
	// std::cout << m[5] << std::endl;

	return 0;
}
