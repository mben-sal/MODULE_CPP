/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:05:07 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/02 13:17:34 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PhoneBook.hpp"
#include "Contact.hpp"

void Contact::setfirstname(std::string _first)
{
    _Firstname = _first;
}

void Contact::setlastname(std::string _last)
{
    _Lastname = _last;
}

void Contact::setnickname(std::string _nick)
{
    _Nickname = _nick;
}

void Contact::setphonename(std::string _phone)
{
    _Phonename = _phone;
}

void Contact::setdarkname(std::string _dark)
{
	_darkname = _dark;
}

std::string Contact::get_firstname(void)
{
	return(this->_Firstname);
}

std::string Contact::get_lastname(void)
{
	return(this->_Lastname);
}

std::string Contact::get_Nickname(void)
{
	return(this->_Nickname);
}

std::string Contact::get_Phonename(void)
{
	return(this->_Phonename);
}

std::string Contact::get_darkname(void)
{
	return(this->_darkname);
}