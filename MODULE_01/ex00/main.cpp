/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:03:12 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/06 18:15:30 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


void destroy(Zombie *zombie)
{
	delete(zombie);
}
int main(void)
{
	// std::string first_name;
	// std::string second_name;
	Zombie *Zombie_;
	std::cout << "The witcher 🧙 is willing to create a zombie in heap and wants you to give him a name!!" << std::endl;
	std::cout << "The name of the first zombie 🧟‍♀️ " << std::endl ;
	// std::cin >> first_name;
	Zombie_ = newZombie("Manar");
	Zombie_->annonce();
	std::cout << "The name of the second zombie 🧟‍♀️ " << std::endl;
	// std::cin >> second_name;
	randomChump("najoua");
	destroy(Zombie_);
}
