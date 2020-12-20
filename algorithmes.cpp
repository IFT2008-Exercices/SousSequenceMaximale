/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <vector>
#include <numeric>

int sommeMaxAlgoCubique(const std::vector<int>& vec) {
    int sommeMaximale = * ( vec.begin() ) ;
    
    for (auto debut = vec.begin(); debut != vec.end(); ++debut) {
        for (auto fin = debut + 1 ; fin != vec.end(); ++fin) {
            int somme = 0;
            for (auto k = debut; k != fin; ++k) 
            {
                somme += (*k) ;
            }
            if (somme > sommeMaximale) {
                sommeMaximale = somme;
            }
        }    
    }
    return sommeMaximale ; 
}

