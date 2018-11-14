
#include <iostream>
#include <string>

using namespace std;

int main()
{
  Patient::Patient(string prenom, string date_naissance, string nom, int nsecu){
  this->nsecu = nsecu;

  this->prenom = prenom;

  this->date_naissance = date_naissance;

  this->nom = nom;

  }

}
