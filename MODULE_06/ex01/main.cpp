/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:20:59 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/07 14:58:58 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct t_Data
{
	int		count;
	int		Serial;
}	Data;


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data data;

    data.count = 42;
    data.Serial = 21;

    std::cout << "counter : " << data.count << std::endl;
    std::cout << "Data Serial : " << data.Serial << std::endl;

    uintptr_t rawBits = serialize(&data);
    Data *returnedData = deserialize(rawBits);

    std::cout << "counter : " << returnedData->count << std::endl;
    std::cout << "Data Serial : " << returnedData->Serial <<std::endl;
 
    return (0);
}