/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:51:08 by mben-sal          #+#    #+#             */
/*   Updated: 2023/11/30 18:57:18 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string.h>
#include <stdlib.h>
#include"PhoneBook.hpp"

class Contact
{
    private:
	std::string _Firstname;
    std::string _Lastname;
    std::string _Nickname;
    std::string _Phonename;
    std::string _darkname;
	public:
		void setfirstname(std::string _first);
		void setlastname(std::string _last);
		void setnickname(std::string _nick);
		void setphonename(std::string _phone);
		void setdarkname(std::string _dark);
		std::string get_firstname(void);
		std::string get_lastname(void);
		std::string	get_Nickname(void);
		std::string get_Phonename(void);
		std::string	get_darkname(void);
};

# endif
