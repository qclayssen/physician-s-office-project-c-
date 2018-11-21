#include <iostream>
#include <string>
using namespace std;


class date
{
public:
    string jour;
    string mois;
    string annee;

    date();
    date(string jour, string mois,string annee);
    void set(string jour, string mois,string annee);
    string getJour();
    string getMois();
    string getAnnee();
    void affiche_date();
};


class patient
{
protected:
    string nomPatient;
    string prenomPatient;
    date date_naissance;
    string groupe_sanguin;
    string ntel;
    string nsecu;
public:
    patient();
    patient(string nomPatient,string prenomPatient,date date_naissance,string groupe_sanguin,string ntel, string secu);
    void set(string nomPatient,string prenomPatient,date date_naissance,string groupe_sanguin,string ntel, string secu);
    string getNomPatient();
    string getPrenomPatient();
    date getDateNaissance();
    string getGroupeSanguin();
    string getNtel();
    string getNsecu();
    void affiche_dossier();

};

class medecin
{
protected:
    string nomMedecin;
    string prenomMedecin;
    string specialite;
    string idmedecin;
public:
    medecin();
    medecin(string nomMedecin,string prenomMedecin,string specialite,string idmedecin);
    void set(string nommedecin,string prenommedecin,string specialite,string idmedecin);
    string getNomMedecin();
    string getPrenomMedecin();
    string getSpecialite();
    string getIdMedcin();
    void affiche_medecin();
};

class rdv : public medecin,public patient
{
private:
    date date_rdv;
public:
    rdv();
    rdv(date date_rdv);
    void set(date date_rdv);
    date getDateRdv();
    void modif_rdv();
    void annulation_rdv();
};


class medicament
{
public:
    string nomMedicament;
    string frequence;
    int dosage;
    int quantite;

    medicament();
    medicament(string nomMedicament,string frequence,int dosage,int quantite);
    void set(string nomMedicament,string frequence,int dosage,int quantite);
    string getNomMedicament();
    string getFrequence();
    int getDosage();
    int getQuantite();
    void affiche_medicament();
};


class ordonnance:public medecin, public patient
{
private:
    date date_delivrance;
    medicament traitement;

public:
  ordonnance();
  ordonnance(date date_delivrance,medicament traitement);
  void set(date date_delivrance,medicament traitement);
  date getDateDeliverance();
  medicament getMedicament();
  void annulation_ordonnance();
  void affiche_ordonnance();
};
