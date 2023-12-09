/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:24:22 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/22 17:39:14 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

int main( void ) {
	
Class_Fixed a;
Class_Fixed const b(Class_Fixed( 5.05f ) * Class_Fixed (2));
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Class_Fixed::max( a, b ) << std::endl;
return 0;
}