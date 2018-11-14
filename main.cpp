
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

  ordonnance::nouvelle_ordonnance(string idmedecin, date date_delivrance, int nsecu, medicament){
  this->idmedecin = idmedecin;

  this->date_delivrance = date_delivrance;

  this->nsecu= nsecu;

  this->liste_medicament = liste_medicament;

  }

  ordonnance::nouvelle_date(int jour, int mois, int annee){
  this->jour = jour;

  this->mois = mois;

  this->annee= annee;

  }
  ordonnance::nouveau_medicament(sting nom ,string frequence, int dosage,int quantite){
  this->nom = nom;

  this->frequence = frequence;

  this->dosage= dosage;

  this->quantite= quantite;



  }
}
