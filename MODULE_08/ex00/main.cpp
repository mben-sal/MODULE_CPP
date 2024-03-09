/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:40:23 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/09 11:38:19 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./easyfind.hpp"
#include <vector>

int	main()
{
	std::vector<int> arr;

	for (int i = 0; i < 10; i++) {
		const int value = rand() % 10;
		arr.push_back(value);
	}
	for (int j = 0; j < 10; ++j) {
		std::cout << arr[j];
		if (j < 9)
			std::cout << ',';
	}
	easyfind(arr, 0);
	return (0);
}