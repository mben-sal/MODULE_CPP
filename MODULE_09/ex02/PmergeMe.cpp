/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:15:32 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/24 22:13:04 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& a)
{
	*this = a;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	this->vector = other.vector;
	this->deque = other.deque;
	this->ve_J_Numbers = other.ve_J_Numbers;
	this->dq_J_Numbers = other.dq_J_Numbers;
	this->vector_pairs = other.vector_pairs;
	this->deque_pairs = other.deque_pairs;
	this->time = other.time;
	this->time_process_ve = other.time_process_ve;
	this->time_process_dq = other.time_process_dq;
	this->rest_num_ve = other.rest_num_ve;
	this->rest_num_dq = other.rest_num_dq;
	return (*this);
}

void number_dub(std::vector<int> &vector)
{
    if (vector.size() <= 1)
        throw std::runtime_error("Error: sort 1 number");

    std::set<int> seen; // Ensemble pour stocker les nombres déjà vus

    for (size_t i = 0; i < vector.size(); i++)
    {
        if (seen.find(vector[i]) != seen.end()) // Vérifier si le nombre est déjà dans l'ensemble
            throw std::runtime_error("Error: dub number");

        seen.insert(vector[i]); // Ajouter le nombre à l'ensemble
    }
}

long long PmergeMe::gettime()
{
	struct timeval start;
	gettimeofday(&start, NULL);
	return (start.tv_sec * 1000000 + start.tv_usec);
}

void PmergeMe::input(std::string &input)
{
	std::istringstream ss(input);
	std::string	v_input;
	int number;
	std::string::iterator it;

	while (ss >> v_input)
	{
		if(v_input.find_first_not_of("0123456789") != std::string::npos)
			throw std::runtime_error("Error : invalid input");
		number = std::atoi(v_input.c_str());
		if(number  >= 0)
		{
			this->vector.push_back(number);
			this->deque.push_back(number);
		}
		else
			throw std::runtime_error("Error: invalid input");
	}
}

void binary_search(int value, std::vector<int> &ve_chain)
{
	std::vector<int>::iterator it;
	it = std::lower_bound(ve_chain.begin(), ve_chain.end(), value);
	ve_chain.insert(it, value);
}
void binary_search_dq(int value, std::deque<int> &dq_chain)
{
	std::deque<int>::iterator it;
	it = std::lower_bound(dq_chain.begin(), dq_chain.end(), value);
	dq_chain.insert(it, value);
}
std::deque<int> combaraison_deq(std::deque<int> dq_J_Numbers)
{
	int last_num = 2;
	std::deque<int> compare;
	for(size_t i = 3 ; i < dq_J_Numbers.size(); i++)
	{
		size_t index = dq_J_Numbers[i];
		if(index > dq_J_Numbers.size())
			break;
		compare.push_back(dq_J_Numbers[i]);
		for(int j = dq_J_Numbers[i] - 1; j > last_num; j--)
		{
			compare.push_back(j);
		}
		if(i == 3)
		{
			compare.push_back(last_num);
		}
		last_num = dq_J_Numbers[i];
	}
	return compare;
}
std::vector<int> combaraison_vec(std::vector<int> vec_J_Numbers , size_t size)
{
	int last_num = 2;
	std::vector<int> compare;
	if(size <= 3)
	{
		compare.push_back(2);
	}
	for (size_t i = 3; i < size; i++)
	{
		size_t index = vec_J_Numbers[i];
		if(index > size)
			break;
		compare.push_back(vec_J_Numbers[i]);
		for(int j = vec_J_Numbers[i] - 1; j > last_num; j--)
		{
			compare.push_back(j);
		}
		if(i == 3)
		{
			compare.push_back(last_num);
		}
		last_num = vec_J_Numbers[i];
	}
	return compare;
}
void PmergeMe::FJohnson_deque()
{
	std::deque<int> dq_chain;
	std::deque<int> dq_pend;
	clock_t start = std::clock();
	if(this->deque.size() % 2 == 1)
	{
		for(size_t i = 0; i < this->vector.size() - 1; i += 2)
		{
			deque_pairs.push_back(std::make_pair(this->deque[i], this->deque[i + 1]));
		}
		this->rest_num_dq = *this->deque.end();
	}
	else
	{
		for(size_t i = 0; i < this->vector.size(); i += 2)
		{
			deque_pairs.push_back(std::make_pair(this->deque[i], this->deque[i + 1]));
		}
	}
	for(size_t i = 0 ; i < deque_pairs.size(); i++) 
	{
		if(deque_pairs[i].first < deque_pairs[i].second)
		{
			std::swap(deque_pairs[i].first, deque_pairs[i].second);
		}
	}
	std::sort(deque_pairs.begin(), deque_pairs.end());
	dq_chain.push_back(deque_pairs[0].second);
	for(size_t i = 0 ; i < deque_pairs.size(); i++)
	{
		dq_chain.push_back(deque_pairs[i].first);
	}
	for (std::deque<std::pair<int , int> >::iterator it  = deque_pairs.begin() + 1; it != deque_pairs.end() ; it++)
	{
		dq_pend.push_back(it->second);
	}
	g_Jacobsthal_N(deque.size());
	std::deque<int> comparaison_index = combaraison_deq(this->dq_J_Numbers);
	for(std::deque<int>::iterator it = comparaison_index.begin(); it != comparaison_index.end() && !dq_pend.empty(); ++it)
	{
		if ((*it - 1) < (int)dq_pend.size())
		{
			if (std::find(dq_chain.begin(), dq_chain.end(), dq_pend[*it - 1]) != dq_chain.end())
				continue;
			binary_search_dq(dq_pend[*it - 1], dq_chain);
		}
	}
	if (!dq_pend.empty())
	{
		for (size_t i = 0 ; i < dq_pend.size() ; i++)
		{
			if (!dq_pend.empty() && std::find(dq_chain.begin(), dq_chain.end(), dq_pend[i]) != dq_chain.end())
				continue;
			binary_search_dq(dq_pend[i], dq_chain);
		}
	}
	if (deque.size() % 2 == 1)
		binary_search_dq(this->rest_num_dq, dq_chain);
	clock_t end = std::clock();
	this->time_process_dq = double(end - start) / CLOCKS_PER_SEC * 1e6;
}

void PmergeMe::g_Jacobsthal_N(int size)
{
	ve_J_Numbers.push_back(0);
	ve_J_Numbers.push_back(1);
	dq_J_Numbers.push_back(0);
	dq_J_Numbers.push_back(1);

	for(int i = 2; i < size; i++)
	{
		int vec = ve_J_Numbers[i - 1] + 2 * ve_J_Numbers[i - 2];
		ve_J_Numbers.push_back(vec);
		int deq = dq_J_Numbers[i - 1] + 2 * dq_J_Numbers[i - 2];
		dq_J_Numbers.push_back(deq);
	}
}

void PmergeMe::FJohnson_vector()
{
	std::vector<int> ve_chain;
	std::vector<int> ve_pend;
	clock_t start = std::clock();
	if(vector.size() % 2 == 1)
	{
		for(size_t i = 0; i < vector.size() - 1; i += 2)
		{
			vector_pairs.push_back(std::make_pair(vector[i], vector[i + 1]));
		}
		this->rest_num_ve = this->vector[vector.size() - 1];
	}
	else
	{
		for(size_t i = 0; i < vector.size(); i += 2)
		{
			vector_pairs.push_back(std::make_pair(vector[i], vector[i + 1]));
		}
	}
	for(size_t i = 0 ; i < vector_pairs.size(); ++i) 
	{
		if(vector_pairs[i].first < vector_pairs[i].second)
		{
			std::swap(vector_pairs[i].first, vector_pairs[i].second);
		}
	}
	std::sort(vector_pairs.begin(), vector_pairs.end());
	ve_chain.push_back(vector_pairs[0].second);
	for(size_t i = 0 ; i < vector_pairs.size(); i++)
	{
		ve_chain.push_back(vector_pairs[i].first);
	}
	for (std::vector<std::pair<int , int> >::iterator it  = vector_pairs.begin() + 1; it != vector_pairs.end() ; it++)
	{
		ve_pend.push_back(it->second);
	}
	g_Jacobsthal_N(vector.size());
	std::vector<int> comparaison_index = combaraison_vec(this->ve_J_Numbers, ve_pend.size());
	for(std::vector<int>::iterator it = comparaison_index.begin(); it != comparaison_index.end() && !ve_pend.empty(); ++it)
	{
		if ((*it -1) < (int)ve_pend.size())
		{
			if (std::find(ve_chain.begin(), ve_chain.end(), ve_pend[*it - 1]) != ve_chain.end())
				continue;
			binary_search(ve_pend[*it - 1], ve_chain);
		}
	}
	if (!ve_pend.empty())
	{
		for (size_t i = 0 ; i < ve_pend.size() ; i++)
		{
			if (!ve_pend.empty() && std::find(ve_chain.begin(), ve_chain.end(), ve_pend[i]) != ve_chain.end())
				continue;
			binary_search(ve_pend[i], ve_chain);
		}
	}
	if (vector.size() % 2 == 1)
		binary_search(this->rest_num_ve, ve_chain);
	clock_t end = std::clock();
	this->time_process_ve = double(end - start) / CLOCKS_PER_SEC * 1e6 ;
	print_liste(ve_chain);
}

void PmergeMe::print_liste(std::vector<int> &main_chain)
{
	std::cout << "before :";
	for(std::vector<int>::iterator it = vector.begin() ; it != vector.end(); it++)
	{
		std::cout << " " << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "after :";
	for(std::vector<int>::iterator it = main_chain.begin() ; it != main_chain.end(); it++)
	{
		std::cout << " " << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->deque.size() << " elements with std::deque<int> :" << this->time_process_dq << " us"<< std::endl; 
	std::cout << "Time to process a range of " << this->vector.size() << " elements with std::vector<int> :" << this->time_process_ve << " us"<< std::endl;
}