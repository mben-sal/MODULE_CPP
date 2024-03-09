/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:45:01 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/08 12:26:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    try {
        Array <int> empty;
        Array <int> data(6);

        std::cout << "the sise of data  = "<< data.size() << std::endl;
        for (size_t i = 0; i < 6; i++)
        {
            data[i] = i * 10;
        }
        Array <int> copy(6);
        data[0] = 1000;
        copy = data;
        std::cout << copy[1] << std::endl;
        copy[1] = 120;
        std::cout << copy[1] << std::endl;
        std::cout << copy[2] << std::endl;
        std::cout << copy[5] << std::endl;
        std::cout << copy[7] << std::endl;
        
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}