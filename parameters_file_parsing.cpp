// Auteurs : Laine Antoine - Clayssen Quentin
#include "./include/parameters_file_parsing.hpp"

#include <sstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>

using namespace std;

parameters_file_parsing::parameters_file_parsing()
{
    ifstream file("./out.txt");
    if(file)
    {
        string line;
        while (!file.eof())
        {
            getline(file, line);
            if (line=="Patient:")
            {
              while (line!="Medecin:"){
                getline(file, line);
              }
            }
        }
    }
    else
    {
        std::cerr << "Erreur avec out.txt !\n";
    }
}


////////////////////////////////////////////////////////////



void parameters_file_parsing::import_line(string const& line)
{
    vector<string> token = this->split(line, ':');
    string const& key = token[0];
    string & value = token[1];


    if(key == "jours")
        jours = value;

    else if(key == "mois")
        mois = value);

    else if(key == "annee")
        annee = value;

    else if(key == "nom")
        nom = value;

    else if(key == "prenom")
        prenom = value;

    else if(key == "specialite")
        specialite = value;

    else if(key == "idmedecin")
        idmedecin = value;

//A finir
            else {}

        }
//=================================================
// parameters_file_parsing : split
//=================================================
vector<string> parameters_file_parsing::split(string const& s, char delim)
{
    stringstream ss(s);
    string item;
    vector<string> tokens;
    while (getline(ss, item, delim))
        tokens.push_back(item);
    return tokens;
}
