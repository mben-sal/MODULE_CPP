/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:05:19 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/08 20:01:24 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include "Contact.hpp"

void	PhoneBook :: tableau()
{
	std::cout << "|---------Welcome to the awesome Phonebook ☎------------|" << std::endl;
    std::cout << "|                        1-ADD                          |" << std::endl;
    std::cout << "|                        2-SEARCH                       |" << std::endl;
    std::cout << "|                        3-EXIT                         |" << std::endl;
    std::cout << "|-------------------------------------------------------|" << std::endl;
}
void exit_d(void)
{
	std::cout << "BYE👋" << std::endl;
	exit(0);
}
int	PhoneBook::add(int i , int count)
{
	std::string	_first;
	std::string	_last;
	std::string	_nick;
	std::string	_phone;
	std::string	_dark;

	while (_first.empty())
	{
		std::cout << "enter your firstname :" << std::endl;
		std::getline (std::cin, _first);
		if(!std::cin)
			exit_d();	
	}
	while (_last.empty() )
	{
		std::cout << "enter your lastname :" << std::endl;
		std::getline (std::cin, _last);
		if(!std::cin)
			exit_d();
	}
	while (_nick.empty())
	{
		std::cout << "enter your nickname :" << std::endl;
		std::getline (std::cin, _nick);
		if(!std::cin)
			exit_d();
	}
	while (_phone.empty())
	{
		std::cout << "enter your phone :" << std::endl;
		std::getline (std::cin, _phone);
		if(!std::cin)
			exit_d();
	}
	while (_dark.empty())
	{
		std::cout << "entre your DarkSecret :" << std::endl;
		std::getline (std::cin, _dark);
		if(!std::cin)
			exit_d();
	}
	this->_Contact[i].setfirstname(_first);
	this->_Contact[i].setlastname(_last);
	this->_Contact[i].setnickname(_nick);
	this->_Contact[i].setphonename(_phone);
	this->_Contact[i].setdarkname(_dark);
	std::cout << "Your contact N " << i <<" was added successfully ✅" << std::endl;
	if(count < 8)
	{
		count++;
	}
		return(count);
}

void PhoneBook::printf_tableau()
{
std::cout << "successfully ✅" << std::endl;
}
void info_data(std::string info)
{
	long unsigned i;

	i = 0;
	if (info.length() < 10)
	{
		while (i < (10 - info.length()))
		{
			std::cout << " ";
			i++;
		}
		std::cout << info << "|";
	}
	else if (info.length() > 10)
		std::cout << info.substr(0,9) << "." << "|";
	else
		std::cout << info << " ";
}

int check_input(std::string sign)
{
	int i;

	i = 0;
	if(sign == "")
		return(0);
	while (sign[i])
	{
		if(sign[i] < '0' || sign[i] > '9')
		{
			return(0);
		}
		i++;
	}
	return(1);
}

void PhoneBook::search(PhoneBook PhoneBook, int count)
{
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string dark;
	std::string sign;
	int i; 
	int nbr;

	i = 0;
	std::cout << " --------------------------------------------" << std::endl;
	std::cout << "|   Index  | FirstName| LastName | NickName  |" << std::endl;
	std::cout << " --------------------------------------------" << std::endl;
	while ( i < count)
	{
		std::cout << "|         " << i << "|";
		first = _Contact[i].get_firstname();
		info_data(first);
		last = _Contact[i].get_lastname();
		info_data(last);
		nick = _Contact[i].get_Nickname();
		info_data(nick);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Enter your contact index : " << std::endl;
	std::getline(std::cin, sign);
	nbr = atoi(sign.c_str());
	if(check_input(sign) == 0 )
	{
		std::cout << "Index invalide ❌" << std::endl;
		return;
	}
	else if(nbr >= count)
	{
		std::cout << "Error : indix invalide !!" << std::endl;
		return;
	}
	else if(nbr >= 0 && nbr < count)
	{
		first = _Contact[nbr].get_firstname();
		std::cout << "First name : " << first << std::endl;
		last = _Contact[nbr].get_lastname();
		std::cout << "Last Name  : " << last << std::endl;
		nick = _Contact[nbr].get_Nickname();
		std::cout << "Nick name  : " << nick << std::endl;
		phone = _Contact[nbr].get_Phonename();
		std::cout << "Phone      : " <<  phone << std::endl;
		dark = _Contact[nbr].get_darkname();
		std::cout << "dark name  : " << dark << std::endl;
		PhoneBook.printf_tableau();
	}

}

int main (int ac , char **av)
{
	(void)av;
	PhoneBook PhoneBook;
	std::string CMD;
	std::string test;
	int count;
	int i;
	
	i = 0;
	count = 0;
	if(ac != 1)
		std::cout << "numbre des arguments incorrect !!" << std::endl;
	else
	{
		PhoneBook.tableau();
		while(std::cin)
		{
			std::getline(std::cin, CMD);
			if(CMD == "ADD")
			{
				count = PhoneBook.add(i , count);
				i++;
				if(i == 8)
					i = 0;
			}
			if(CMD == "SEARCH")
			{
				PhoneBook.search(PhoneBook, count);
			}
			if (CMD == "EXIT")
			{
				std::cout << "BYE👋" <<std::endl;
				exit(0);	
			}
			if(!std::cin)
				exit_d();
			std::cout << "Enter your commande ADD, SEARCH or EXIT." << std::endl;
		}
	}
	return(0);
}