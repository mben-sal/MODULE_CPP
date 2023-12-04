/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:31:08 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/03 12:39:36 by mben-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"sed.hpp"

sed::sed(std::string filename): infile(filename)
{
	this->outfile = this->infile + ".replace";
}

sed::~sed()
{
}

void sed::replace(std::string const s2, std::string const s3)
{
    std::ifstream in(this->infile); // Ouvrir le fichier d'entrée
    std::ofstream out(this->outfile); // Créer le fichier de sortie


    if (!in)
    {
        std::cout << "Failed to open input file: " << this->infile << std::endl;
        return; // Sortir de la fonction en cas d'échec
    }

    if (!out)
    {
        std::cout << "Failed to create output file: " << this->outfile << ".replace" << std::endl;
        return; // Sortir de la fonction en cas d'échec
    }

    std::string ligne;
    size_t j;

    while (std::getline(in, ligne)) // Lire chaque ligne du fichier d'entrée
    {
        j = 0;
        while ((j = ligne.find(s2, j)) != std::string::npos)
        {
            ligne.replace(j, s2.length(), s3); // Remplacer s2 par s3 dans la ligne
            j += s3.length(); // Avancer j pour éviter de rester bloqué dans une boucle infinie
        }
        out << ligne << std::endl; // Écrire la ligne modifiée dans le fichier de sortie
    }

    in.close(); // Fermer le fichier d'entrée
    out.close(); // Fermer le fichier de sortie
}
