/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:13:10 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/03 16:20:09 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Base.hpp"

Base::~Base() {
	std::cout << "Base Destructor Called\n";
}

A::~A() {
	std::cout << "A Destructor Called\n";
}

B::~B() {
	std::cout << "B Destructor Called\n";
}

C::~C() {
	std::cout << "C Destructor Called\n";
}
