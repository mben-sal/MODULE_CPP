/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:47:43 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/02 14:08:11 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define  CONVERSION_HPP

# include <iostream>	// std::cout, std::fixed
# include <iomanip>		// std::setprecision

# define true 1
# define false 0

class Conversion
{
	private:
		std::string	_str;
		std::string	_type;
		bool		p_int;
		char		_char;
		int			_int;
		float		_flt;
		double		_dbl;
	public:
		Conversion();
		Conversion(Conversion const &a);
		Conversion(std::string str);
		Conversion& operator= (Conversion const &a);
		~Conversion();

		void	getType();
		bool	checkChar();
		bool	checkInt();
		bool	checkFloat();
		bool	checkDouble();

		void	cast();

		void	to_Char();
		void	to_Int();
		void	to_Float();
		void	to_Double();

		void	printData();

		void	printChar();
		void	printInt();
		void	printFlt();
		void	printDbl();
};

#endif