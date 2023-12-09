/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:09:56 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/21 12:46:28 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fixed.hpp"

int main( void ) 
{
	fixed a;
	fixed b( a ); //Crée un nouvel objet Fixed nommé b en utilisant le constructeur de copie.
	fixed c;
	c = b; //Utilise l'opérateur d'assignation pour copier le contenu de l'objet b dans l'objet c
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}