/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 15:44:12 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/03 14:15:31 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main(int ac, char **av)
{
    int  j;
    int  i;
	std::string str;
	
    i = 1;
    if(ac == 1)
    {
        std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
	else
    while(av[i] != '\0')
    {
        j = 0;
		str = av[i];
        while(str[j] != '\0')
        {
          std::cout << ((char)(std::toupper(str[j])));
           j++;
        }
        i++;
    }
    std::cout << std::endl;
    return(0);
}