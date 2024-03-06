/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:23:24 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/06 10:59:10 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>

class Array
{
private:
	T* array;
	unsigned int l;
public:
	Array()
	{
		array = NULL;
		l = 0;
	}
	Array(unsigned int m)
	{
		l = m;
		array = new T[m];
	}
	Array(const Array &obj)
	{
		this->l = obj.l;
		this->array = new T[this->l];
		unsigned int i = 0;
		while (i < this->l)
		{
			this->array[i] = obj.array[i];
			i++;
		}
		
	}
	Array &operator=(const Array &obj)
	{
		this->l = obj.l;
		unsigned int i = 0;
		while (i < obj.l)
		{
			this->array[i] = obj.array[i];
			i++;
		}
		return *this;
	}
	T &operator [](unsigned int n)const
	{
		if(this->l <= n)
			throw(Array::OutofrangeException());
		return array[n];
	}
	T &operator [](unsigned int n)
	{
		if(this->l <= n)
			throw(Array::OutofrangeException());
		return array[n];
	}
	T *getArray() const
	{
		return this->array;
	}
	unsigned int size() const
	{
		return this->l;
	}
	class OutofrangeException : public std::exception
	{
		const char *what() const throw()
		{
			return(" Out of range ");
		}
	};
	~Array()
	{
		if(this->l)
			delete[] this->array;
	}
};

