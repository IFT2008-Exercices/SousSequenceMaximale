/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: pascalcharpentier
 *
 * Created on 20 décembre 2020, 14 h 38
 */

#include <cstdlib>
#include <iostream>
#include "algorithmes.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    vector<int> t1  {1};
    vector<int> t2  {1, 1, 1, 2, -1};
    
    cout << "Résultat algo 1, test 1: " << sommeMaxAlgoCubique(t1) << endl;
    cout << "Résultat algo 1, test 2: " << sommeMaxAlgoCubique(t2) << endl;

    return 0;
}

