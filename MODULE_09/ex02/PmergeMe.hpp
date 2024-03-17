/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:36:16 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/17 19:55:22 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <sys/time.h>
#include <exception>
#include <deque>

class PmergeMe
{
	private:
		std::vector<int> vector;
		std::deque<int> deque;
		std::vector<int> ve_J_Numbers;
		std::deque<int> dq_J_Numbers;
		std::vector<std::pair<int, int> > vector_pairs;
		std::deque<std::pair<int, int> > deque_pairs;
		long long time;
		double time_process_ve;
		double time_process_dq;
		int rest_num_ve;
		int rest_num_dq;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& a);
		PmergeMe& operator=(const PmergeMe& other);
		~PmergeMe();
		long long gettime();
		void print_liste(std::vector<int> &main_chain);
		void input(std::string &input);
		void FJohnson_vector();
		void FJohnson_deque();
		void g_Jacobsthal_N(int size);
};