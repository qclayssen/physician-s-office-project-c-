
#include <iostream>
#include <string>
#include "fonction.hpp"
using namespace std;

  patient::patient(){
    this->nsecu="1974425365478";
    this->prenomPatient="Jean";
    this->nomPatient="Dupont";
    this->date_naissance=date("09","01","1997");
    this->groupe_sanguin="AO";
    this->ntel="0699324578";
  }

  patient::patient(string nompatient,string prenompatient,date date_naissance,string groupe_sanguin,string ntel, string nsecu){
  this->nsecu = nsecu;
  this->prenomPatient = prenompatient;
  this->date_naissance = date_naissance;
  this->nomPatient = nompatient;
  this->groupe_sanguin=groupe_sanguin;
  this->ntel=ntel;
  }


  medecin::medecin(){
  this->nomMedecin = "Prevert";
  this->prenomMedecin = "Jacques";
  this->specialite = "Proctologie";
  this->idmedecin = "35647986";
  }

  medecin::medecin(string nommedecin, string prenommedecin, string specialite, string idmedecin){
  this->nomMedecin = nommedecin;
  this->prenomMedecin = prenommedecin;
  this->specialite= specialite;
  this->idmedecin = idmedecin;
  }


  rdv::rdv(): medecin(),patient(){
  this->date_rdv = date("12","04","2019");
  }


/*
  rdv::rdv(date date_rdv, medecin medecin, patient patient);){
    this->date_rdv = date;
    this->medecin = medecin;
    this->patient = patient;

  }*/


  ordonnance::ordonnance():medecin(),patient(){
    this->date_delivrance = date("12","04","2019");
    this->traitement =medicament("paracetamol","2/jour",500,20);
}
/*
  ordonnance::ordonnance(medecin medecin, date date_delivrance, patient patient, medicament liste_medicament){
    this->medecin = idmedecin;
    this->date_delivrance = date_delivrance;
    this->nsecu= nsecu;
    this->liste_medicament = liste_medicament;

  }*/

  date::date(){
  this->jour = "09";
  this->mois = "01";
  this->annee= "1997";

  }

  date::date(string jour, string mois, string annee){
  this->jour = jour;
  this->mois = mois;
  this->annee= annee;

  }

  medicament::medicament(){
  this->nomMedicament ="paracetamol";
  this->frequence = "2/jours";
  this->dosage= 500;
  this->quantite= 20;
  }


  medicament::medicament(string nommedicament ,string frequence, int dosage,int quantite){
  this->nomMedicament = nommedicament;
  this->frequence = frequence;
  this->dosage= dosage;
  this->quantite= quantite;
  }


void patient::affiche_dossier(){
  cout<<"prenom:"<<prenompatient<<endl;
  cout<<"date de naissance:"<<date_naissance<<endl;
  cout<<"nom:"<<nomPatient<<endl;
  cout<<"nsecu:"<<nsecu<<endl;
}


/*
rdv::annulation_rdv(){
  this->date_rdv = delete;
  this->medecin = NULL;
  this->patient = NULL;

}*/

void rdv::modif_rdv(date date, medecin medecin, patient patient){
  this->date_rdv = date_rdv;
  this->medecin = medecin;
  this->patient = patient;

}

ordonnance::annulation_ordonnance(){

}




int main()
{

}
