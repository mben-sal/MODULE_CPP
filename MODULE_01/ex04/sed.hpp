/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:17:37 by mben-sal          #+#    #+#             */
/*   Updated: 2023/10/16 18:26:38 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

/* Includes */

#include <iostream>
#include <fstream>
#include <cstring>

class sed
{
private:
	std::string infile;
	std::string outfile;
	std::string filename;
public:
	sed(std::string filename);
	~sed();
	void replace(std::string to_replace ,std::string NV);
};

#endif
