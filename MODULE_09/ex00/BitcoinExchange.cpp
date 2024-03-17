/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:35:02 by mben-sal          #+#    #+#             */
/*   Updated: 2024/03/16 20:44:02 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void read_map(std::map<std::string, float>& container, const std::string& filename)
{
	std::string ligne;
	std::ifstream exchangefile(filename);
	if (!exchangefile)
		throw std::runtime_error("file CSV not found");
	std::getline(exchangefile, ligne);
	while (std::getline(exchangefile, ligne))
	{
		std::stringstream ss(ligne);
		std::string date;
		std::string value;
		std::getline(ss, date, ',');
		std::getline(ss, value, ',');
		container[date] = atof(value.c_str());
	}
	exchangefile.close();
}
void read_input(const std::string& file, std::map<std::string, float>&container)
{
	std::ifstream inputfile(file);
	std::string ligne;

	if(!inputfile)
		throw std::runtime_error("file input not found");
	std::getline(inputfile, ligne);
	if(checkligne(ligne) != "date | value" || ligne.empty())
		throw std::runtime_error("Error: bad input file");
	while(std::getline(inputfile, ligne))
	{
		std::istringstream mm (ligne);
		std::string date;
		std::string value;
		if(std::getline(mm, date, '|') && std::getline(mm, value) && !ligne.empty())
		{
			if(ligne.find_first_not_of('\n') == std::string::npos)
				continue;
			if(!checkdate(checkligne(date)))
			{
				std::cerr << "Error: bad input => " + ligne << std::endl;
				continue;
			}
			if(!checkvaleur(checkligne(value)))
			{
				std::cerr << "Error: bad input => " + ligne << std::endl;
				continue;
			}
			closes_liee(container, checkligne(date), checkligne(value));
		}
		if(!ligne.empty() && value.empty())
		{
			std::cerr << "Error: bad input => " + checkligne(date) << std::endl;
			continue;
		}
		if(!ligne.empty() && date.empty())
		{
			std::cerr << "Error: bad input => " + checkligne(value) << std::endl;
			continue;
		}
	}
	inputfile.close();
}

void closes_liee(std::map<std::string, float>& container, const std::string& date, const std::string& value)
{
	std::map<std::string, float>::iterator it = container.lower_bound(date);
	if (it == container.end())
		--it;
	else if (it != container.begin() && it->first != date)
	{
		std::map<std::string, float>::iterator prev = it;
		--prev;
		if (date.compare(prev->first) - date.compare(it->first) > 0)
			it = prev;
	}
	float exchangeRate = it->second;
	float finalvalue = atof(value.c_str());
	float result = finalvalue * exchangeRate;
	std::cout << date << " => " << value << " = " << result << std::endl;
}
std::string checkligne(std::string &str)
{
	std::string ligne = str;
	size_t debut = 0;
	while (debut < ligne.length() && ligne[debut] == ' ')
		debut++;
	ligne = ligne.substr(debut);
	size_t fin = ligne.length() - 1;
	while (fin > 0 && ligne[fin] == ' ')
		fin--;
	ligne = ligne.substr(0, fin + 1);
	return ligne;
}
bool checkvaleur(const std::string &valeur)
{
	int flag = 0;
	for(size_t i = 0; i < valeur.length(); i++)
	{
		if(valeur[i] == '.')
			flag++;
	}
	for (size_t i = 0; i < valeur.length(); i++)
	{
		if(!isdigit(valeur[i]) && flag != 1)
			return 0;
	}
	float val = atof(valeur.c_str());
	if(val <= 0 || val >= 1000)
		return 0;
	return 1;
}
bool checkdate( const std::string &date )
{
	if (date.length() != 10)
		return 0;
	if(date[4] != '-' || date[7] != '-')
		return 0;
	std::string année = date.substr(0,4);
	std::string mois  = date.substr(5,2);
	std::string jour = date.substr(8,2);
	for(size_t i = 0; i < année.length(); i++)
	{
		if (!isdigit(année[i]))
			return 0;
	}
	for(size_t i = 0; i < mois.length(); i++)
	{
		if (!isdigit(mois[i]))
			return 0;
	}
	for(size_t i = 0; i < jour.length(); i++)
	{
		if (!isdigit(jour[i]))
			return 0;
	}
	int année_int = atoi(année.c_str());
	int mois_int = atoi(mois.c_str());
	int jour_int = atoi(jour.c_str());
	if(année_int < 2008 || année_int > 2022 || mois_int < 1 || mois_int > 12 || jour_int < 1 || jour_int > 31)
		return 0;
	if((mois_int == 4 || mois_int == 6 || mois_int == 9 || mois_int == 11) && (jour_int > 30))
		return 0;
	if(mois_int == 2)
	{
		int exep = (année_int % 4 == 0);
		int max = 28;
		if (exep)
			max = 29;
		if(jour_int > max)
			return 0;
	}
	return 1;	
}