/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 10:37:44 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/19 19:54:46 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND


#include <iostream>
#include <algorithm>

template <typename T>
bool easyfind(const T& container, int value)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);

    if (it != container.end())
    {
        std::cout << "\nThe first occurrence of " << value << " found\n";
        return true;
    }
    std::cout << "\nElement " << value << " not found\n";
    return false;
}

#endif

