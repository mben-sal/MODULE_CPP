/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:31:08 by mben-sal          #+#    #+#             */
/*   Updated: 2023/12/07 21:29:37 by mben-sal         ###   ########.fr       */
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

    if (!in)
    {
        std::cout << "Failed to open input file: " << this->infile << std::endl;
        return ; // Sortir de la fonction en cas d'échec
    }
    std::ofstream out(this->outfile); // Créer le fichier de sortie
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
		// size_t k = 0;
        std::string modligne; // Pour stocker la ligne modifiée

        while ((j = ligne.find(s2, j)) != std::string::npos)
        {
            // Partie avant l'occurrence
            modligne += ligne.substr(0, j);
            // Sous-chaîne à insérer à la place
            modligne += s3;
            // Mise à jour de la position pour éviter une boucle infinie
            // Partie après l'occurrence
            ligne = ligne.substr(j + s2.length());
        }
        // Ajouter le reste de la ligne après la dernière occurrence
        modligne += ligne;
        out << modligne << std::endl; // Écrire la ligne modifiée dans le fichier de sortie
    }

    in.close(); // Fermer le fichier d'entrée
    out.close(); // Fermer le fichier de sortie
}