
#include <iostream>
#include <string>

using namespace std;

int main()
{
  patient::nouveau_patient(string prenom, date date_naissance, string nom, int nsecu){
  this->nsecu = nsecu;

  this->prenom = prenom;

  this->date_naissance = date_naissance;

  this->nom = nom;

  }

  medecin::nouveau_medecin(string nom, string prenom, string specialite, int idmedecin){
  this->nom = nom;

  this->prenom = prenom;

  this->specialite= specialite;

  this->idmedecin = idmedecin;

  }

  rdv::nouveau_rdv(string nom, string date_naissance, string nom, int nsecu){
  this->nom = nsecu;

  this->prenom = prenom;

  this->specialite= specialite;

  this->idmedecin = nom;

  }

  ordonnance::nouveau_ordonnance(string idmedecin, date date_delivrance, string traitememt, int nsecu){
  this->nom = nsecu;

  this->prenom = prenom;

  this->specialite= specialite;

  this->idmedecin = nom;

  }


}
