/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:30:38 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/05 15:49:12 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp" 

// template <typename T >
int main(void )
{
	std::cout << "****** int *******" <<std::endl;
	int m[2] = {13 , 37};
	iter(m ,2, &print); 
	std::cout << "******** char *****" <<std::endl;
	std::string n[2] = {"manar" , "bensalah"};
	iter(n, 2, &print);
}