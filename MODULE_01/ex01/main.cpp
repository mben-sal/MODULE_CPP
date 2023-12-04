/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:43:20 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/04 18:33:07 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *Zombie_;
	size_t N;
	size_t i;
	
	i = 0;
	std::cout << "Please enter the size of your horde zombies: " << std::endl;
	std::cin >> N;
	Zombie_ = zombieHorde( N,"zombie");
	while(i < N)
	{
		Zombie_[i].annonce();
		i++;
	}
	delete[] Zombie_;
		
}