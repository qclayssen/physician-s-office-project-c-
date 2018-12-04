
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include "fonction.hpp"
using namespace std;

//////////////// PERSONNE /////////////////
  personne::personne(){
    this->nom="Dupont";
    this->prenom="Jean";
  }

  personne::personne(string nom, string prenom){
    this->nom=nom;
    this->prenom=prenom;
  }

  string personne::getNom(){
    return nom;
  }

  string personne::getPrenom(){
    return prenom;
  }

//////////////// PATIENT /////////////////

  patient::patient():personne(){
    this->nsecu="1974425365478";
    this->date_naissance=date();
    this->groupe_sanguin="AO";
    this->ntel="0699324578";
  }

  patient::patient(string nom, string prenom,date date_naissance,string groupe_sanguin,string ntel, string nsecu):personne(nom,prenom){
    this->nsecu = nsecu;
    this->prenom = prenom;
    this->date_naissance = date_naissance;
    this->nom = nom;
    this->groupe_sanguin=groupe_sanguin;
    this->ntel=ntel;
  }

  void patient::affichePatient(){
    cout<<"prenom:"<<prenom<<endl;
    cout<<"date de naissance:"<<date_naissance.getJour()<<"/"<<date_naissance.getMois()<<"/"<<date_naissance.getAnnee()<<endl;
    cout<<"nom:"<<nom<<endl;
    cout<<"nsecu:"<<nsecu<<endl;
    cout<<"numero telephone:"<<ntel<<endl;
    cout<<"groupe sanguin:"<<groupe_sanguin<<endl;
    cout<<endl;
  }

  void patient::set(string nom, string prenom,date date_naissance,string groupe_sanguin,string ntel, string nsecu){
    this->nsecu = nsecu;
    this->prenom = prenom;
    this->date_naissance = date_naissance;
    this->nom = nom;
    this->groupe_sanguin=groupe_sanguin;
    this->ntel=ntel;
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

  medecin::medecin(): personne(){
    this->specialite = "Proctologie";
    this->idmedecin = "35647986";
  }

  medecin::medecin(string nom, string prenom, string specialite, string idmedecin): personne(nom,prenom){
    this->nom = nom;
    this->prenom = prenom;
    this->specialite= specialite;
    this->idmedecin = idmedecin;
  }


  void medecin::set(string nom, string prenom,string specialite, string idmedecin){
    this->nom = nom;
    this->prenom = prenom;
    this->specialite= specialite;
    this->idmedecin = idmedecin;
  }

  string medecin::getSpecialite(){
    return specialite;
  }

  string medecin::getIdMedecin(){
    return idmedecin;
  }

  void medecin::afficheMedecin(){
    cout<<"Nom : "<<nom<<" "<<prenom<<endl;
    cout<<"specialite: "<<specialite<<endl;
    cout<<"id: "<<idmedecin<<endl;
    cout<<endl;
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

  void rdv::afficheRdv(){
    cout<<"Médecin: "<<medecin_rdv.getNom()<<" "<<medecin_rdv.getPrenom()<<endl;
    cout<<"Patient: "<<patient_rdv.getNom()<<" "<<patient_rdv.getPrenom()<<endl;
    cout<<"Date du rendez-vous: "<<date_rdv.getJour()<<"/"<<date_rdv.getMois()<<"/"<<date_rdv.getAnnee()<<endl;
    cout<<endl;
  }

  medecin rdv::getMedecinRdv(){
    return medecin_rdv;
  }

  patient rdv::getPatientRdv(){
    return patient_rdv;
  }

  date rdv::getDateRdv(){
    return date_rdv;
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

  ordonnance::ordonnance(){
    this->date_ordo = date();
    this->patient_ordo = patient();
    this->medecin_ordo = medecin();
    this->medicament_ordo.push_back(medicament());
}

  ordonnance::ordonnance(date date_ordo, medecin medecin_ordo, patient patient_ordo,vector<medicament> list_medoc){
    this->date_ordo = date_ordo;
    this->patient_ordo = patient_ordo;
    this->medecin_ordo = medecin_ordo;
    this->medicament_ordo = list_medoc;
  }

  void ordonnance::set(date date_ordo, medecin medecin_ordo, patient patient_ordo,vector<medicament> list_medoc){
    this->date_ordo = date_ordo;
    this->patient_ordo = patient_ordo;
    this->medecin_ordo = medecin_ordo;
    this->medicament_ordo = list_medoc;
  }

  void ordonnance::afficheOrdonnance(){
    cout<<"Médecin: "<<medecin_ordo.getNom()<<" "<<medecin_ordo.getPrenom()<<endl;
    cout<<"Patient: "<<patient_ordo.getNom()<<" "<<patient_ordo.getPrenom()<<endl;
    cout<<"Date de l'ordonnance: "<<date_ordo.getJour()<<"/"<<date_ordo.getMois()<<"/"<<date_ordo.getAnnee()<<endl;
    for (int i=0;i<medicament_ordo.size();i++){
      cout<<"Medicament "<<i<<": "<<medicament_ordo[i].getNomMedicament()<<" "<<medicament_ordo[i].getDosage()<<" mg, "<<medicament_ordo[i].getFrequence()<<", Quantité: "<<medicament_ordo[i].getQuantite()<<endl;
    }
    cout<<endl;
  }

  date ordonnance::getDateDeliverance(){
    return date_ordo;
  }

  medecin ordonnance::getMedecinOrdo(){
    return medecin_ordo;
  }

  patient ordonnance::getPatientOrdo(){
    return patient_ordo;
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

  string date::getDateEntiere(){
    return(jour+"/"+mois+"/"+annee);
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
  list<patient> liste_patient;
  list<patient>::iterator iterpatient;
  patient a;
  patient b("Travolta","John",date("12","02","1995"),"AA","0695478874", "12254684675");
  liste_patient.push_back(a);
  liste_patient.push_back(b);

  list<medecin> liste_medecin;
  list<medecin>::iterator itermedecin;
  medecin c;
  medecin d("Frankenstein", "Albert", "Zombologie", "666");
  liste_medecin.push_back(c);
  liste_medecin.push_back(d);

  list<rdv> liste_rdv;
  list<rdv>::iterator iterrdv;
  rdv e(date("28","11","2018"),c,a);
  rdv f(date("28","11","2018"),d,b);
  liste_rdv.push_back(e);
  liste_rdv.push_back(f);

  list<ordonnance> liste_ordonnance;
  list<ordonnance>::iterator iterordonnance;
  ordonnance g;
  liste_ordonnance.push_back(g);

  int option;
  int type;
  int parquoi;
  string recherche;
  cout<<"Que voulez vous faire : \n 1) Afficher information \n 2) creation de fiche  \n";
  cin>>option;
  switch (option) {
    case 1:
    cout<<"Que voulez vous chercher : \n 1) Patient \n 2) Medecin \n 3) Rdv \n 4) Ordonnance \n 5) Médicament \n";
    cin>>type;
      switch (type) {
        case 1:
        cout<<"Par quoi ?\n 1) Nom\n 2) Prénom\n 3) N° de Secu\n";
        cin>>parquoi;
        switch (parquoi) {
          case 1:
          cout<<"Entrez Nom ";
          cin>>recherche;
          for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
            if ((*iterpatient).getNomPatient()==recherche){
              (*iterpatient).affichePatient();
          }
          }break;
          case 2:
          cout<<"Entrez Prénom : ";
          cin>>recherche;
          for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
            if ((*iterpatient).getPrenomPatient()==recherche){
              (*iterpatient).affichePatient();
          }
          }break;
          case 3:
          cout<<"Entrez Numéros de Sécurité Sociale : ";
          cin>>recherche;
          for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
            if ((*iterpatient).getNsecu()==recherche){
              (*iterpatient).affichePatient();
          }
        }break;
      }break;
        case 2:
        cout<<"Par quoi ?\n 1) Nom\n 2) Spécialité\n 3) IdMedecin\n";
        cin>>parquoi;
        switch (parquoi) {
          case 1:
          cout<<"Entrez nom ";
          cin>>recherche;
          for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
            if ((*itermedecin).getNomMedecin()==recherche){
              (*itermedecin).afficheMedecin();
          }
          }break;
          case 2:
          cout<<"Entrez spécialité ";
          cin>>recherche;
          for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
            if ((*itermedecin).getSpecialite()==recherche){
              (*itermedecin).afficheMedecin();
          }
          }break;
          case 3:
          cout<<"Entrez ID Medecin ";
          cin>>recherche;
          for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
            if ((*itermedecin).getIdMedecin()==recherche){
              (*itermedecin).afficheMedecin();
          }
          }break;
        }break;
        case 3:
        cout<<"Par quoi ?\n 1) Medecin \n 2) Patient \n 3) Dates";
        cin>>parquoi;
        switch (parquoi) {
          case 1:
          cout<<"Nom Medecin ";
          cin>>recherche;
          for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
            if ((*iterrdv).getMedecinRdv().getNomMedecin()==recherche){
              (*iterrdv).afficheRdv();
          }
          }break;
          case 2:
          cout<<"Nom Patient ";
          cin>>recherche;
          for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
            if ((*iterrdv).getPatientRdv().getNomPatient()==recherche){
              (*iterrdv).afficheRdv();
          }
          }break;
          case 3:
          cout<<"Date ";
          cin>>recherche;
          for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
            if ((*iterrdv).getDateRdv().getDateEntiere()==recherche){
              (*iterrdv).afficheRdv();
          }
          }break;
        }break;
        case 4:
        cout<<"Par quoi ?\n 1) Medecin \n 2) Patient \n 3) Dates";
        cin>>parquoi;
        switch (parquoi) {
          case 1:
          cout<<"Nom : ";
          cin>>recherche;
          for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
            if ((*iterrdv).getMedecinRdv().getNomMedecin()==recherche){
              (*iterrdv).afficheRdv();
          }
          }break;
        }break;
        case 4:
        cout<<"Par quoi ?\n 1) Medecin \n 2) Patient";
        cin>>parquoi;
        switch (parquoi) {
          case 1:
          cout<<"Medecin: ";
          cin>>recherche;
          for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
            if ((*iterordonnance).getMedecinOrdo().getNomMedecin()==recherche){
              (*iterordonnance).afficheOrdonnance();
            }
            }break;
          case 2:
          cout<<"Patient: ";
          cin>>recherche;
          for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
            if ((*iterordonnance).getPatientOrdo().getNomPatient()==recherche){
              (*iterordonnance).afficheOrdonnance();
            }
            }break;
          }break;
          }break;
    case 2:
    cout<<"Que voulez vous cree : \n 1) Patient \n 2) Medecin \n 3) Rdv \n 4) Ordonnance \n";
    cin>>type;
      switch (type) {
        case 1:
        string nom;
        string prenom;
        string nsecu;
        string jnaissance;
        string mnaissance;
        string anaissance;
        string ntel;
        string sanguin;
        cout<<"Entrer Nom Prénom\n 3) N° de Secu\n";
        cin>>nom;
        cout<<"Entrer prénom"<<endl;
        cin>>prenom;
        cout<<"Entrer  N° de Secu"<<endl;
        cin>>nsecu;
        cout<<"Entrer jours de naissance"<<endl;
        cin>>jnaissance;
        cout<<"Entrer mois de naissance"<<endl;
        cin>>mnaissance;
        cout<<"Entrer annee de naissance"<<endl;
        cin>>anaissance;
        cout<<"Entrer numéro de téléphone"<<endl;
        cin>>ntel;
        cout<<"Entrer groupe sanguin"<<endl;
        cin>>sanguin;
        patient nouveau(nom,prenom,date(jnaissance,mnaissance,anaissance),sanguin,ntel,nsecu);
        liste_patient.push_back(nouveau);}break;
        case 2:
        string nom;
        string prenom;
        string specialite;
        string idmedecin;
        cout<<"Entrer Nom";
        cin>>nom;
        cout<<"Entrer prénom"<<endl;
        cin>>prenom;
        cout<<"Entrer  specialite"<<endl;
        cin>>specialite;
        cout<<"Entrer idmedecin"<<endl;
        cin>>idmedecin;
        patient nouveau(nom,prenom,specialite,idmedecin);
        liste_medecin.push_back(nouveau);}break;
        case 3:
        string jrdv;
        string mrdv;
        string ardv;
        medecin medecin;
        patient patient;
        cout<<"Entrer jours du rendez-vous"<<endl;
        cin>>jrdv;
        cout<<"Entrer mois du rendez-vous"<<endl;
        cin>>mrdv;
        cout<<"Entrer annee du rendez-vous"<<endl;
        cin>>ardv;
        cout<<"Entrer IdMedecin"<<endl;
        cin>>idmedecin;
        for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
          if ((*itermedecin).getIdMedecin()==idmedecin){
            medecin=(*itermedecin);
        }
        cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
        cin>>nsecu;
        for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
          if ((*iterpatient).getNsecu()==nsecu){
            patient=(*iterpatient);
        }
        rdv nouveau(date(jrdv,mrdv,ardv),medecin,patient);
        liste_rdv.push_back(nouveau);}break;

  }
}
