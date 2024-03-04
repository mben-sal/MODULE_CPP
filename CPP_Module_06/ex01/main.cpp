/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 14:22:42 by msaouab           #+#    #+#             */
/*   Updated: 2022/07/03 16:07:53 by msaouab          ###   ########.fr       */
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