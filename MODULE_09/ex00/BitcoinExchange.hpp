/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:34:59 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/16 15:55:39 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

void read_map(std::map<std::string, float>& exchangeRates, const std::string& filename);
void read_input(const std::string& file, std::map<std::string, float>& exchangeRates);
bool checkdate(const std::string& date);
bool checkvaleur(const std::string &valeur);
std::string checkligne(std::string &str);
void closes_liee(std::map<std::string, float>& exchangeRates, const std::string& date, const std::string& value);





#endif