/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:28:32 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/04 11:44:21 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include"iostream"
#include"iomanip"


class Conversion
{
	private :
		std::string str;
		std::string type;
		bool print;
		char _char;
		int _int;
		float _Float;
		double _double;
	public:
		Conversion();
		Conversion(std::string str);
		Conversion(Conversion const &str);
		~Conversion();
		Conversion &operator=(Conversion const &a);
		void getType();
		bool check_int();
		bool check_char();
		bool check_float();
		bool check_double();
		void cast();
		void to_char();
		void to_int();
		void to_float();
		void to_double();
		void print_type();
		void print_char();
		void print_int();
		void print_float();
		void print_double();
		
};





#endif