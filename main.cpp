
#include <iostream>
#include <string>
#include "fonction.h"
using namespace std;

  patient::patient(){
    this->nsecu="1974425365478"
    this->prenom="Jean"
    this->nom="Dupont"
    this->date_naissance=date("09","01","1997")
    this->groupe_sanguin="AO"
    this->ntel="0699324578"
  }

  patient::patient(string nom,string prenom,date date_naissance,string groupe_sanguin,string ntel, string nsecu){
  this->nsecu = nsecu;
  this->prenom = prenom;
  this->date_naissance = date_naissance;
  this->nom = nom;
  this->groupe_sanguin=groupe_sanguin
  this->ntel=ntel
  }


  medecin::medecin(){
  this->nom = "Prevert";
  this->prenom = "Jacques";
  this->specialite = "Proctologie";
  this->idmedecin = "35647986";
  }

  medecin::medecin(){
  this->nom = nom;
  this->prenom = prenom;
  this->specialite= specialite;
  this->idmedecin = idmedecin;
  }


  rdv::rdv(date date_rdv, medecin medecin, patient patient);){
  this->date_rdv = date("12","04","2019")
  this->medecin = medecin("Zola","Emile","Radiologie","6489975")
  this->patient = patient("")
  }

  rdv::rdv(date date_rdv, medecin medecin, patient patient);){

  }


  ordonnance::ordonnance(string idmedecin, date date_delivrance, int nsecu, medicament){
  this->idmedecin = idmedecin;

  this->date_delivrance = date_delivrance;

  this->nsecu= nsecu;

  this->liste_medicament = liste_medicament;

  }

  date::date(int jour, int mois, int annee){
  this->jour = jour;

  this->mois = mois;

  this->annee= annee;

  }
  medicament::medicament(string nom ,string frequence, int dosage,int quantite){
  this->nom = nom;

  this->frequence = frequence;

  this->dosage= dosage;

  this->quantite= quantite;



  }
}

patient::affiche_dossier(){
  cout<<"prenom:"<<prenom<<endl;
  cout<<"date de naissance:"<<date_naissance<<endl;
  cout<<"nom:"<<nom<<endl;
  cout<<"nsecu:"<<nsecu<<endl;
}

rdv::annulation_rdv(){

}

rdv::modif_rdv(){

}

ordonnance::annulation_ordonnance(){

}




int main()
{

}
