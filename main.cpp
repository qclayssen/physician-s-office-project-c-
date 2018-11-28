
#include <iostream>
#include <string>
#include "fonction.hpp"
using namespace std;

//////////////// PATIENT /////////////////

  patient::patient(){
    this->nsecu="1974425365478";
    this->prenom_patient="Jean";
    this->nom_patient="Dupont";
    this->date_naissance=date();
    this->groupe_sanguin="AO";
    this->ntel="0699324578";
  }

  patient::patient(string nompatient,string prenompatient,date date_naissance,string groupe_sanguin,string ntel, string nsecu){
    this->nsecu = nsecu;
    this->prenom_patient = prenompatient;
    this->date_naissance = date_naissance;
    this->nom_patient = nompatient;
    this->groupe_sanguin=groupe_sanguin;
    this->ntel=ntel;
  }

  void patient::affichePatient(){
    cout<<"prenom:"<<prenom_patient<<endl;
    cout<<"date de naissance:"<<date_naissance.getJour()<<"/"<<date_naissance.getMois()<<"/"<<date_naissance.getAnnee()<<endl;
    cout<<"nom:"<<nom_patient<<endl;
    cout<<"nsecu:"<<nsecu<<endl;
    cout<<"numero telephone:"<<ntel<<endl;
    cout<<"groupe sanguin:"<<groupe_sanguin<<endl;
  }

  void patient::set(string nompatient,string prenompatient,date date_naissance,string groupe_sanguin,string ntel, string nsecu){
    this->nsecu = nsecu;
    this->prenom_patient = prenompatient;
    this->date_naissance = date_naissance;
    this->nom_patient = nompatient;
    this->groupe_sanguin=groupe_sanguin;
    this->ntel=ntel;
    }

  string patient::getNomPatient(){
    return nom_patient;
  }

  string patient::getPrenomPatient(){
    return prenom_patient;
  }

  date patient::getDateNaissance(){
    return date_naissance;
  }

  string patient::getGroupeSanguin(){
    return groupe_sanguin;
  }

  string patient::getNtel(){
    return ntel;
  }

  string patient::getNsecu(){
    return nsecu;
  }

//////////////// MEDECIN /////////////////

  medecin::medecin(){
    this->nom_medecin = "Prevert";
    this->prenom_medecin = "Jacques";
    this->specialite = "Proctologie";
    this->idmedecin = "35647986";
  }

  medecin::medecin(string nommedecin, string prenommedecin, string specialite, string idmedecin){
    this->nom_medecin = nommedecin;
    this->prenom_medecin = prenommedecin;
    this->specialite= specialite;
    this->idmedecin = idmedecin;
  }


  void medecin::set(string nommedecin, string prenommedecin, string specialite, string idmedecin){
    this->nom_medecin = nommedecin;
    this->prenom_medecin = prenommedecin;
    this->specialite= specialite;
    this->idmedecin = idmedecin;
  }

  string medecin::getNomMedecin(){
    return nom_medecin;
  }

  string medecin::getPrenomMedecin(){
    return prenom_medecin;
  }

  string medecin::getSpecialite(){
    return specialite;
  }

  string medecin::getIdMedecin(){
    return idmedecin;
  }

  void medecin::afficheMedecin(){
    cout<<"Nom : "<<nom_medecin<<" "<<prenom_medecin<<endl;
    cout<<"specialite: "<<specialite<<endl;
    cout<<"id: "<<idmedecin<<endl;
  }


//////////////// RDV /////////////////

  rdv::rdv(){
    this->date_rdv = date();
    this->patient_rdv = patient();
    this->medecin_rdv = medecin();
  }

  rdv::rdv(date date_rdv, medecin medecin_rdv, patient patient_rdv){
    this->date_rdv = date_rdv;
    this->patient_rdv = patient_rdv;
    this->medecin_rdv = medecin_rdv;
  }

  /*
  rdv::annulation_rdv(){
    this->date_rdv = delete;
    this->medecin = NULL;
    this->patient = NULL;
  }


  void rdv::modif_rdv(date date, medecin medecin, patient patient){
    this->date_rdv = date_rdv;
    this->medecin = medecin;
    this->patient = patient;

  }

  */


//////////////// ORDONNANCE /////////////////

  ordonnance::ordonnance(): medicament(){
    this->date_ordo = date();
    this->patient_ordo = patient();
    this->medecin_ordo = medecin();
}

ordonnance::ordonnance(date date_ordo, medecin medecin_ordo, patient patient_ordo,string nom_medicament ,string frequence, int dosage,int quantite): medicament(nom_medicament,frequence,dosage,quantite){
  this->date_ordo = date_ordo;
  this->patient_ordo = patient_ordo;
  this->medecin_ordo = medecin_ordo;
  this->nom_medicamant = nom_medicament;
  this->frequence = frequence;
  this->dosage= dosage;
  this->quantite= quantite;
}

  void ordonnance::afficheOrdonnance(){
    cout<<"Médecin: "<<medecin_ordo.getNomMedecin()<<" "<<medecin_ordo.getPrenomMedecin()<<endl;
    cout<<"Patient: "<<patient_ordo.getNomPatient()<<" "<<patient_ordo.getPrenomPatient()<<endl;
    cout<<"Date de l'ordonnance: "<<date_ordo.getJour()<<"/"<<date_ordo.getMois()<<"/"<<date_ordo.getAnnee()<<endl;
    cout<<"Medicament: "<<nom_medicamant<<" "<<dosage<<" mg, "<<frequence<<", Quantité: "<<quantite<<endl;
  }


//////////////// DATE /////////////////

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

  void date::set(string jour, string mois, string annee){
    this->jour = jour;
    this->mois = mois;
    this->annee= annee;
  }

  string date::getJour(){
    return jour;
  }

  string date::getMois(){
    return mois;
  }

  string date::getAnnee(){
    return annee;
  }


  //////////////// MEDICAMENT /////////////////

  medicament::medicament(){
    this->nom_medicamant ="paracetamol";
    this->frequence = "2/jours";
    this->dosage= 500;
    this->quantite= 20;
  }


  medicament::medicament(string nom_medicament ,string frequence, int dosage,int quantite){
    this->nom_medicamant = nom_medicament;
    this->frequence = frequence;
    this->dosage= dosage;
    this->quantite= quantite;
  }

  void medicament::set(string nom_medicament ,string frequence, int dosage,int quantite){
    this->nom_medicamant = nom_medicament;
    this->frequence = frequence;
    this->dosage= dosage;
    this->quantite= quantite;
  }


  string medicament::getNomMedicament(){
    return nom_medicamant;
  }

  string medicament::getFrequence(){
    return frequence;
  }

  int medicament::getDosage(){
    return dosage;
  }

  int medicament::getQuantite(){
    return quantite;
  }

  void medicament::afficheMedicament(){
    cout<<"Nom du médicament: "<<nom_medicamant<<endl;
    cout<<"frequence de prise par jour: "<<frequence<<endl;
    cout<<"dosage: "<<dosage<<endl;
    cout<<"quantite: "<<quantite<<endl;
  }



int main()
{
  patient a;
  a.affichePatient();

  ordonnance ordo;
  ordo.afficheOrdonnance();

  string option;
  cout<<"Que voulez vous faire : \n 1) Afficher information \n 2) creation de fiche  \n";
  cin>>option;

  string type;
  cout<<"Que voulez vous faire : \n 1) Patient \n 2) medecin \n 3) medicament \n 4) Rdv ";
  cin>>type;

  string cible;
  cout<<"entrer le nom ";
  cin>>cible;



}
