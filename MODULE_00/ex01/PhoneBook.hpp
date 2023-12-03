/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:05:29 by mben-sal          #+#    #+#             */
/*   Updated: 2023/11/30 18:31:11 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CONTACT 8
#include "Contact.hpp"

class PhoneBook
{
	Contact _Contact[8];
	public:
	void	tableau();
	int add(int i, int count);
	void search(PhoneBook PhoneBook, int count);
	void printf_tableau();
	void affiche_contact(PhoneBook phone, int nbr);
};

#endif