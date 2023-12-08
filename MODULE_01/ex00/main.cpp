/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 20:03:12 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/07 21:30:05 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


void destroy(Zombie *zombie)
{
	delete(zombie);
}
int main(void)
{
	Zombie *Zombie_;
	std::cout << "The witcher 🧙 is willing to create a zombie in heap and wants you to give him a name!!" << std::endl;
	std::cout << "The name of the first zombie 🧟‍♀️ " << std::endl ;
	Zombie_ = newZombie("Manar");
	Zombie_->annonce();
	std::cout << "The name of the second zombie 🧟‍♀️ " << std::endl;
	randomChump("najoua");
	destroy(Zombie_);
}
