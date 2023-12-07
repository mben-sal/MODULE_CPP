/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:43:20 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 18:30:32 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *Zombie_;
	int N = 0;
	int i;

	i = 0;
	std::cout << "Please enter the size of your horde zombies: " << std::endl;
	std::cin >> N;
	if(std::cin.bad() || std::cin.fail())
		return(0);
	if (N <= 0)
		return 0;
	Zombie_ = zombieHorde(N,"zombie");
	while(i < N)
	{
		Zombie_[i].annonce();
		i++;
	}
	delete[] Zombie_;
		
}