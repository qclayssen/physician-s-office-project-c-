
#include <iostream>
#include <string>
#include "fonction.hpp"
using namespace std;

//////////////// PATIENT /////////////////

  patient::patient(){
    this->nsecu="1974425365478";
    this->prenom_patient="Jean";
    this->nom_patient="Dupont";
    this->date_naissance=date("09","01","1997");
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

  void medecin::affiche_medecin(){
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
/*
  ordonnance::ordonnance(medecin medecin, date date_ordo, patient patient, medicament liste_medicament){
    this->medecin = idmedecin;
    this->date_ordo = date_ordo;
    this->nsecu= nsecu;
    this->liste_medicament = liste_medicament;
  }*/
  void ordonnance::affiche_ordonnance(){
    cout<<"Médecin: "<<medecin_ordo.getNomMedecin()<<" "<<medecin_ordo.getPrenomMedecin()<<endl;
    cout<<"Patient: "<<patient_ordo.getNomPatient()<<" "<<patient_ordo.getPrenomPatient()<<endl;
    cout<<"Date de l'ordonnance: "<<date_ordo.getJour()<<"/"<<date_ordo.getMois()<<"/"<<date_ordo.getAnnee()<<endl;
    cout<<"Medicament: "<<nom_medicamant<<endl;
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


  medicament::medicament(string nommedicament ,string frequence, int dosage,int quantite){
    this->nom_medicamant = nommedicament;
    this->frequence = frequence;
    this->dosage= dosage;
    this->quantite= quantite;
  }

  void medicament::set(string nommedicament ,string frequence, int dosage,int quantite){
    this->nom_medicamant = nommedicament;
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

  void medicament::affiche_medicament(){
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
  ordo.affiche_ordonnance();

}
