// Auteurs : Laine Antoine - Clayssen Quentin
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <fstream>
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
    this->medecin_traitant=medecin();
  }

  patient::patient(string nom, string prenom,date date_naissance,string groupe_sanguin,string ntel, string nsecu, medecin medecin_traitant):personne(nom,prenom){
    this->nsecu = nsecu;
    this->prenom = prenom;
    this->date_naissance = date_naissance;
    this->nom = nom;
    this->groupe_sanguin=groupe_sanguin;
    this->ntel=ntel;
    this->medecin_traitant=medecin_traitant;
  }

  void patient::affichePatient(){
    cout<<"==============="<<endl;
    cout<<"prenom:"<<prenom<<endl;
    cout<<"date de naissance:"<<date_naissance.getJour()<<"/"<<date_naissance.getMois()<<"/"<<date_naissance.getAnnee()<<endl;
    cout<<"nom:"<<nom<<endl;
    cout<<"nsecu:"<<nsecu<<endl;
    cout<<"numéro téléphone:"<<ntel<<endl;
    cout<<"groupe sanguin:"<<groupe_sanguin<<endl;
    cout<<"médecin traitant:"<<medecin_traitant.getNom()<<" "<<medecin_traitant.getPrenom()<<endl;
    cout<<"==============="<<endl;
    cout<<endl;
  }

  void patient::set(string nom, string prenom,date date_naissance,string groupe_sanguin,string ntel, string nsecu,medecin medecin_traitant){
    this->nsecu = nsecu;
    this->prenom = prenom;
    this->date_naissance = date_naissance;
    this->nom = nom;
    this->groupe_sanguin=groupe_sanguin;
    this->ntel=ntel;
    this->medecin_traitant=medecin_traitant;
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

  medecin patient::getMedecinTraitant(){
    return medecin_traitant;
  }

//////////////// MEDECIN /////////////////

  medecin::medecin(): personne(){
    this->specialite = "Radiologie";
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
    cout<<"==============="<<endl;
    cout<<"Nom:"<<nom<<" "<<prenom<<endl;
    cout<<"specialite:"<<specialite<<endl;
    cout<<"id:"<<idmedecin<<endl;
    cout<<"==============="<<endl;
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

  void rdv::set(date date_rdv, medecin medecin_rdv, patient patient_rdv){
    this->date_rdv = date_rdv;
    this->patient_rdv = patient_rdv;
    this->medecin_rdv = medecin_rdv;
  }

  void rdv::afficheRdv(){
    cout<<"==============="<<endl;
    cout<<"Médecin:"<<medecin_rdv.getNom()<<" "<<medecin_rdv.getPrenom()<<endl;
    cout<<"Patient:"<<patient_rdv.getNom()<<" "<<patient_rdv.getPrenom()<<endl;
    cout<<"Date du rendez-vous:"<<date_rdv.getJour()<<"/"<<date_rdv.getMois()<<"/"<<date_rdv.getAnnee()<<endl;
    cout<<"==============="<<endl;
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
    cout<<"==============="<<endl;
    cout<<"Médecin:"<<medecin_ordo.getNom()<<" "<<medecin_ordo.getPrenom()<<endl;
    cout<<"Patient:"<<patient_ordo.getNom()<<" "<<patient_ordo.getPrenom()<<endl;
    cout<<"Date de l'ordonnance:"<<date_ordo.getJour()<<"/"<<date_ordo.getMois()<<"/"<<date_ordo.getAnnee()<<endl;
    for (int i=0;i<medicament_ordo.size();i++){
      cout<<"Medicament "<<i<<":"<<medicament_ordo[i].getNomMedicament()<<" "<<medicament_ordo[i].getDosage()<<" mg, "<<medicament_ordo[i].getFrequence()<<", Quantité: "<<medicament_ordo[i].getQuantite()<<endl;
    }
    cout<<"==============="<<endl;
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
    this->nom_medicament ="paracetamol";
    this->frequence = "2/jours";
    this->dosage= 500;
    this->quantite= 20;
  }


  medicament::medicament(string nom_medicament ,string frequence, int dosage,int quantite){
    this->nom_medicament = nom_medicament;
    this->frequence = frequence;
    this->dosage= dosage;
    this->quantite= quantite;
  }

  void medicament::set(string nom_medicament ,string frequence, int dosage,int quantite){
    this->nom_medicament = nom_medicament;
    this->frequence = frequence;
    this->dosage= dosage;
    this->quantite= quantite;
  }


  string medicament::getNomMedicament(){
    return nom_medicament;
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
    cout<<"==============="<<endl;
    cout<<"Nom du médicament:"<<nom_medicament<<endl;
    cout<<"frequence de prise par jour:"<<frequence<<endl;
    cout<<"dosage:"<<dosage<<endl;
    cout<<"quantite:"<<quantite<<endl;
    cout<<"==============="<<endl;
    cout<<endl;
  }

int main()
{


//On créer une des listes pour chaque classe avec dans certain cas des exemples de construction.
//Ces listes seront utilisées dans le menu interactif et pour le fichier de sorties.
  list<patient> liste_patient;
  list<patient>::iterator iterpatient;
  patient a;
  patient b("Travolta","John",date("12","02","1995"),"AA","0695478874", "12254684675",medecin());
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
  vector<medicament> medicament_ordo;
  ordonnance g;
  medicament i;
  medicament_ordo.push_back(i);
  liste_ordonnance.push_back(g);

  list<medicament> liste_medicament;
  list<medicament>::iterator itermedicament;
  medicament h;
  liste_medicament.push_back(h);


  // Variables utilisée dans le menu interactif
  int option,type,parquoi,quantite,dosage,leaveTest,unik;
  string recherche,nom,prenom,nsecu,jour,mois,annee,ntel,sanguin,specialite,idmedecin,nom_medicament,frequence,medecin_traitant;
  medecin medecin_modif;
  patient patient_modif;
  medicament medoc;

//leaveTest est une sécurité permettant de retourner au menu principal en cas de problème avec la saisie d'option


  //Dans le while se trouve le menu interactif. Sortir du while quitte le programme est créer un fichier output que nous verrons plus tard.
  while(option!=4){
    leaveTest=0;
    unik=0;
    recherche=-1;
    parquoi=-1;
    option=-1;

    //Pour ce déplacer dans les option on entre les numéros de chaque option les de saisie sons gérée par cin.fail et default case présent dans les switch
    cout<<"Que voulez vous faire : \n 1) Afficher information \n 2) Créer nouvelle instance \n 3) Modification de rendez-vous\n 4) Quitter\n";
    cin>>option;
    while (cin.fail()){
          cin.clear();
          cin.ignore();
          cout << "Numéro invalide! ";
          cin >> option;
      }
    switch (option) {
      case 1:// Affiche
        cout<<"Que voulez vous chercher : \n 1) Patient \n 2) Medecin \n 3) Rdv \n 4) Ordonnance \n 5) Médicament \n Autre) Retour menu\n";
        cin>>type;
        switch (type) {
          case 1:// Affiche Patient
          cout<<"Par quoi ?\n 1) Nom\n 2) Prénom\n 3) N° de Secu\n Autre) Retour menu\n";
          cin>>parquoi;
          switch (parquoi) {
            case 1:// Affiche Patient nom
              while(leaveTest!=1){
                cout<<"Entrez Nom "<<endl;
                cin>>recherche;
                for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
                  if ((*iterpatient).getNom()==recherche){
                    (*iterpatient).affichePatient();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Nom inconnu"<<endl;
                }
              }break;
            case 2: // Affiche Patient prenom
              while(leaveTest!=1){
                cout<<"Entrez Prénom : "<<endl;
                cin>>recherche;
                for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
                  if ((*iterpatient).getPrenom()==recherche){
                    (*iterpatient).affichePatient();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Prénom inconnu"<<endl;
                }
            }break;
            case 3:// Affiche Patient nsecu
              while(leaveTest!=1){
                cout<<"Entrez Numéros de Sécurité Sociale : "<<endl;
                cin>>recherche;
                for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
                  if ((*iterpatient).getNsecu()==recherche){
                    (*iterpatient).affichePatient();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Numéro de sécurité sociale inconnu"<<endl;
                }
            }break;
            default:
            cout<<"Retour menu"<<endl;
            leaveTest==0;

          }break;

        case 2:// Affiche medecin
          cout<<"Par quoi ?\n 1) Nom\n 2) Spécialité\n 3) IdMedecin\n Autre) Retour menu\n"<<endl;
          cin>>parquoi;
          switch (parquoi) {
            case 1:// Affiche medecin nom
              while(leaveTest!=1){
                cout<<"Entrez nom \n"<<endl;
                cin>>recherche;
                for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                  if ((*itermedecin).getNom()==recherche){
                    (*itermedecin).afficheMedecin();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Nom inconnu\n"<<endl;
                }
            }break;
            case 2: // Affiche medecin spe
              while(leaveTest!=1){
                cout<<"Entrez spécialité \n"<<endl;
                cin>>recherche;
                for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                  if ((*itermedecin).getSpecialite()==recherche){
                    (*itermedecin).afficheMedecin();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Spécialité inconnue\n"<<endl;
                }
            }break;
            case 3: // Affiche medecin id
              while(leaveTest!=1){
                cout<<"Entrez ID Medecin \n"<<endl;
                cin>>recherche;
                for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                  if ((*itermedecin).getIdMedecin()==recherche){
                    (*itermedecin).afficheMedecin();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Identifiant inconnu\n"<<endl;
                }
            }break;
            default:
            cout<<"Retour menu"<<endl;
          }break;

        case 3:// Affiche rdv
          cout<<"Par quoi ?\n 1) Medecin \n 2) Patient \n 3) Dates \n Autre) Retour menu\n"<<endl;
          cin>>parquoi;
          switch (parquoi) {
            case 1:// Affiche rdv medec
              while(leaveTest!=1){
                cout<<"Nom Medecin "<<endl;
                cin>>recherche;
                for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
                  if ((*iterrdv).getMedecinRdv().getNom()==recherche){
                    (*iterrdv).afficheRdv();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Nom inconnu"<<endl;
                }
            }break;
            case 2: // Affiche rdv patient
              while(leaveTest!=1){
                cout<<"Nom Patient "<<endl;
                cin>>recherche;
                for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
                  if ((*iterrdv).getPatientRdv().getNom()==recherche){
                    (*iterrdv).afficheRdv();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Nom inconnu"<<endl;
                }
            }break;
            case 3:// Affiche rdv dates
              while(leaveTest!=1){
                cout<<"Date: (JJ/MM/AAAA)"<<endl;
                cin>>recherche;
                for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
                  if ((*iterrdv).getDateRdv().getDateEntiere()==recherche){
                    (*iterrdv).afficheRdv();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Date inconnue"<<endl;
                }
                if (recherche.length()!=10){
                  cout<<"Format de date incorrect"<<endl;
                }
            }break;
            default:
            cout<<"Retour menu"<<endl;
            leaveTest==0;
          }break;

        case 4:// Affiche ordonnance
          cout<<"Par quoi ?\n 1) Medecin \n 2) Patient \n Autre) Retour menu\n"<<endl;
          cin>>parquoi;
          switch (parquoi) {
            case 1:// Affiche ordonnance medecin
              while(leaveTest!=1){
                cout<<"Identifiant Medecin: "<<endl;
                cin>>recherche;
                for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
                  if ((*iterordonnance).getMedecinOrdo().getIdMedecin()==recherche){
                    (*iterordonnance).afficheOrdonnance();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"Identifiant inconnu"<<endl;
                }
              }break;

            case 2: // Affiche ordonnance patient
              while(leaveTest!=1){
                cout<<"N° de sécurité sociale Patient: "<<endl;
                cin>>recherche;
                for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
                  if ((*iterordonnance).getPatientOrdo().getNsecu()==recherche){
                    (*iterordonnance).afficheOrdonnance();
                    leaveTest=1;
                  }
                }
                if (leaveTest==0){
                  cout<<"N° de sécurité sociale inconnu"<<endl;
                }
              }break;
              default:
              cout<<"Retour menu"<<endl;
              leaveTest==0;
            }break;

        case 5:// Affiche medicament
          while(leaveTest!=1){
            cout<<"Entrer nom médicament"<<endl;
            cin>>recherche;
            for (itermedicament=liste_medicament.begin();itermedicament!=liste_medicament.end();itermedicament++){
              if ((*itermedicament).getNomMedicament()==recherche){
                (*itermedicament).afficheMedicament();
                leaveTest=1;
              }
            }
            if (leaveTest==0){
              cout<<"Nom inconnu"<<endl;
            }
          }break;

        }break;
      case 2:// Creation
        cout<<"Que voulez vous cree : \n 1) Patient \n 2) Medecin \n 3) Rdv \n 4) medicament \n5) Ordonnance \n Autre) Retour menu\n"<<endl;
        cin>>type;
        switch (type) {
          case 1:{//creation patient
            cout<<"Entrer Nom"<<endl;
            cin>>nom;
            cout<<"Entrer Prénom"<<endl;
            cin>>prenom;
            while(unik!=1){
              cout<<"Entrer N° de Secu"<<endl;
              cin>>nsecu;
              unik=1;
              for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
                if ((*iterpatient).getNsecu()==nsecu){
                  cout<<"Numéro de sécurité sociale non-unique"<<endl;
                  unik=0;
                }
              }
            }
            cout<<"Entrer jours de naissance"<<endl;
            cin>>jour;
            cout<<"Entrer mois de naissance"<<endl;
            cin>>mois;
            cout<<"Entrer annee de naissance"<<endl;
            cin>>annee;
            cout<<"Entrer numéro de téléphone"<<endl;
            cin>>ntel;
            cout<<"Entrer groupe sanguin"<<endl;
            cin>>sanguin;
            while(unik!=1){
              cout<<"Entrer ID médecin traitant"<<endl;
              cin>>medecin_traitant;
              for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                if ((*itermedecin).getIdMedecin()==medecin_traitant){
                  medecin_modif=(*itermedecin);
                  unik=1;
                }
              }
              if(unik==0){
                cout<<"Id de médecin inconnu"<<endl;
              }
            }
            patient nouveau_patient(nom,prenom,date(jour,mois,annee),sanguin,ntel,nsecu,medecin_modif);
            liste_patient.push_back(nouveau_patient);
          }break;
          case 2:{//creation medecin
            cout<<"Entrer Nom"<<endl;
            cin>>nom;
            cout<<"Entrer Prénom"<<endl;
            cin>>prenom;
            cout<<"Entrer  spécialité"<<endl;
            cin>>specialite;
            while(unik!=1){
              cout<<"Entrer Idmedecin"<<endl;
              cin>>idmedecin;
              unik=1;
              for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                if ((*itermedecin).getIdMedecin()==idmedecin){
                  cout<<"Identifiant non-unique"<<endl;
                  unik=0;
                }
              }
            }
            cout<<"Entrer Idmedecin"<<endl;
            cin>>idmedecin;
            medecin nouveau_medecin(nom,prenom,specialite,idmedecin);
            liste_medecin.push_back(nouveau_medecin);
          }break;
          case 3:{//creation rdv
            cout<<"Entrer jours du rendez-vous"<<endl;
            cin>>jour;
            cout<<"Entrer mois du rendez-vous"<<endl;
            cin>>mois;
            cout<<"Entrer annee du rendez-vous"<<endl;
            cin>>annee;
            while(unik!=1){
              cout<<"Entrer ID médecin traitant"<<endl;
              cin>>medecin_traitant;
              for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                if ((*itermedecin).getIdMedecin()==medecin_traitant){
                  medecin_modif=(*itermedecin);
                  unik=1;
                }
              }
              if(unik==0){
                cout<<"Id de médecin inconnu"<<endl;
              }
            }
            unik=0;
            while(unik!=1){
              cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
              cin>>nsecu;
              for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
                if ((*iterpatient).getNsecu()==nsecu){
                  patient_modif=(*iterpatient);
                  unik=1;
                }
              }
              if(unik==0){
                cout<<"Numéro de sécurité sociale inconnu"<<endl;
              }
            }
            rdv nouveau_rdv(date(jour,mois,annee),medecin_modif,patient_modif);
            liste_rdv.push_back(nouveau_rdv);
          }break;
          case 4:{//creation medicament
            cout<<"Entrer nom"<<endl;
            cin>>nom_medicament;
            cout<<"Entrer frequence"<<endl;
            cin>>frequence;
            cout<<"Entrer dosage"<<endl;
            cin>>dosage;
            cout<<"Entrer quantite"<<endl;
            cin>>quantite;

            medicament nouveau_medicament(nom_medicament,frequence,dosage,quantite);
            liste_medicament.push_back(nouveau_medicament);
          }break;
          case 5:{ //creation ordonnance
            cout<<"Entrer jours du ordonnance"<<endl;
            cin>>jour;
            cout<<"Entrer mois du ordonnance"<<endl;
            cin>>mois;
            cout<<"Entrer annee du ordonnance"<<endl;
            cin>>annee;
            cout<<"Entrer IdMedecin"<<endl;
            cin>>idmedecin;
            while(unik!=1){
              cout<<"Entrer ID médecin traitant"<<endl;
              cin>>medecin_traitant;
              for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
                if ((*itermedecin).getIdMedecin()==medecin_traitant){
                  medecin_modif=(*itermedecin);
                  unik=1;
                }
              }
              if(unik==0){
                cout<<"Id de médecin inconnu"<<endl;
              }
            }
            unik=0;
            while(unik!=1){
              cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
              cin>>nsecu;
              for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
                if ((*iterpatient).getNsecu()==nsecu){
                  patient_modif=(*iterpatient);
                  unik=1;
                }
              }
              if(unik==0){
                cout<<"Numéro de sécurité sociale inconnu"<<endl;
              }
            }
            cout<<"Entrer nom de médicament, pour arrêter entrer 'fin'"<<endl;
            while(nom_medicament!="fin"){
              cout<<"Nom de médicament:"<<endl;
              cin>>nom_medicament;
              for (itermedicament=liste_medicament.begin();itermedicament!=liste_medicament.end();itermedicament++){
                if ((*itermedicament).getNomMedicament()==nom_medicament){
                  medoc=(*itermedicament);
              }}
            }medicament_ordo.push_back(medoc);
            ordonnance nouvelle_ordonnance(date(jour,mois,annee),medecin_modif,patient_modif,medicament_ordo);
          }break;
          default:
          cout<<"Retour menu"<<endl;
          leaveTest==0;
        }break;
      case 3:// Modification de rendez vous
        cout<<"Par quoi rechercher ? : 1) IdMedecin\n 2) Numéros de sécurité sociale Patient\n 3) Dates\n Autre) Retour menu\n"<<endl;
        cin>>type;
        switch (type) {
          case 1:{// Modification par medecin
            cout<<"idMecedin ";
            cin>>recherche;
            vector<rdv> liste_rdv_medecin;
            for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
              if ((*iterrdv).getMedecinRdv().getIdMedecin()==recherche){
                (*iterrdv).afficheRdv();
                liste_rdv_medecin.push_back(*iterrdv);
              }
            }
            if (liste_rdv_medecin.size()>1){
              cout<<"Quelle rendez-vous voulez vous modifier (1,2,3,...) ?";
              cin>>type;
            }
            else {
              type=1;
            }
            cout<<"Entrer jours du rendez-vous"<<endl;
            cin>>jour;
            cout<<"Entrer mois du rendez-vous"<<endl;
            cin>>mois;
            cout<<"Entrer annee du rendez-vous"<<endl;
            cin>>annee;
            cout<<"Entrer IdMedecin"<<endl;
            cin>>idmedecin;
            for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
              if ((*itermedecin).getIdMedecin()==idmedecin){
                medecin_modif=(*itermedecin);
            }}
            cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
            cin>>nsecu;
            for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
              if ((*iterpatient).getNsecu()==nsecu){
                patient_modif=(*iterpatient);
            }}
            liste_rdv_medecin[type-1].set(date(jour,mois,annee),medecin_modif,patient_modif);

          }break;
          case 2:{ // Modification par nsecu
            cout<<"Entrez Numéros de Sécurité Sociale : ";
            cin>>recherche;
            vector<rdv> liste_rdv_patient;
            for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
              if ((*iterpatient).getNsecu()==recherche){
                (*iterpatient).affichePatient();
                liste_rdv_patient.push_back(*iterrdv);
              }
            }
            if (liste_rdv_patient.size()>1){
              cout<<"Quelle rendez-vous voulez vous modifier (1,2,3,...) ?";
              cin>>type;
            }
            else {
              type=1;
            }

            cout<<"Entrer jours du rendez-vous"<<endl;
            cin>>jour;
            cout<<"Entrer mois du rendez-vous"<<endl;
            cin>>mois;
            cout<<"Entrer annee du rendez-vous"<<endl;
            cin>>annee;
            cout<<"Entrer IdMedecin"<<endl;
            cin>>idmedecin;
            for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
              if ((*itermedecin).getIdMedecin()==idmedecin){
                medecin_modif=(*itermedecin);
            }}
            cout<<"Entrer numéros de sécurité sociale du patient_modif"<<endl;
            cin>>nsecu;
            for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
              if ((*iterpatient).getNsecu()==nsecu){
                patient_modif=(*iterpatient);
            }}
            liste_rdv_patient[type-1].set(date(jour,mois,annee),medecin_modif,patient_modif);

          }break;
          case 3:{// Modification par nsecu
            cout<<"Date: (JJ/MM/AAAA)";
            cin>>recherche;
            vector<rdv> liste_rdv_dates;
            for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
              if ((*iterrdv).getDateRdv().getDateEntiere()==recherche){
                (*iterrdv).afficheRdv();
                liste_rdv_dates.push_back(*iterrdv);
              }
            }
            if (liste_rdv_dates.size()>1){
              cout<<"Quelle rendez-vous voulez vous modifier (1,2,3,...) ?";
              cin>>type;
            }
            else {
              type=1;
            }

            cout<<"Entrer jours du rendez-vous"<<endl;
            cin>>jour;
            cout<<"Entrer mois du rendez-vous"<<endl;
            cin>>mois;
            cout<<"Entrer annee du rendez-vous"<<endl;
            cin>>annee;
            cout<<"Entrer IdMedecin"<<endl;
            cin>>idmedecin;
            for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
              if ((*itermedecin).getIdMedecin()==idmedecin){
                medecin_modif=(*itermedecin);
            }}
            cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
            cin>>nsecu;
            for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
              if ((*iterpatient).getNsecu()==nsecu){
                patient_modif=(*iterpatient);

            }}
            liste_rdv_dates[type-1].set(date(jour,mois,annee),medecin_modif,patient_modif);

          }break;
          default:
          cout<<"Retour menu"<<endl;
          leaveTest==0;
        }break;
      case 4:// Quitter
        continue;
      default:
        cout<<"Retour menu"<<endl;
      }
    }

// creation du fichier output .txt dans le quel on fais appel au fonction affiche de chaque classe.
  ofstream out("out.txt");
  streambuf *coutbuf = std::cout.rdbuf();
  cout.rdbuf(out.rdbuf());

    cout<<"#Patient:"<<endl;
    for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
      (*iterpatient).affichePatient();
    }
    cout<<endl;

    cout<<"#Medecin:"<<endl;
    for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
      (*itermedecin).afficheMedecin();
    }
    cout<<endl;

    cout<<"#Medicament:"<<endl;
    for (itermedicament=liste_medicament.begin();itermedicament!=liste_medicament.end();itermedicament++){
      (*itermedicament).afficheMedicament();
    }
    cout<<endl;

    cout<<"#Ordonnance:"<<endl;
    for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
      (*iterordonnance).afficheOrdonnance();
    }
    cout<<endl;

    cout<<"#Rendez-vous:"<<endl;
    for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
      (*iterrdv).afficheRdv();
    }
    cout<<endl;

  cout.rdbuf(coutbuf);


}
