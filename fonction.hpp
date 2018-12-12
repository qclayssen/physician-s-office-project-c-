#include <iostream>
#include <string>
#include <vector>
using namespace std;

class personne
{
protected:
  string nom;
  string prenom;
public:
  personne();
  personne(string nom,string prenom);
  void set(string nom,string prenom);
  string getNom();
  string getPrenom();
};

class date
{
private:
    string jour;
    string mois;
    string annee;
public:
    date();
    date(string jour, string mois,string annee);
    void set(string jour, string mois,string annee);
    string getJour();
    string getMois();
    string getAnnee();
    string getDateEntiere();
    void afficheDate();
};


class patient : public personne
{
private:
    date date_naissance;
    string groupe_sanguin;
    string ntel;
    string nsecu;
public:
    patient();
    patient(string nom,string prenom,date date_naissance,string groupe_sanguin,string ntel, string secu);
    void set(string nom,string prenom,date date_naissance,string groupe_sanguin,string ntel, string secu);
    date getDateNaissance();
    string getGroupeSanguin();
    string getNtel();
    string getNsecu();
    void affichePatient();
};

class medecin : public personne
{
private:
    string specialite;
    string idmedecin;
public:
    medecin();
    medecin(string nom,string prenom,string specialite,string idmedecin);
    void set(string nom,string prenom,string specialite,string idmedecin);
    string getSpecialite();
    string getIdMedecin();
    void afficheMedecin();
};

class rdv
{
private:
    date date_rdv;
    medecin medecin_rdv;
    patient patient_rdv;
public:
    rdv();
    rdv(date date_rdv, medecin medecin_rdv, patient patient);
    void set(date date_rdv, medecin medecin_rdv, patient patient_rdv);
    date getDateRdv();
    medecin getMedecinRdv();
    patient getPatientRdv();
    void modifRdv();
    void annulationRdv();
    void afficheRdv();
};


class medicament
{
protected:
    string nom_medicament;
    string frequence;
    int dosage;
    int quantite;
public:
    medicament();
    medicament(string nom_medicament,string frequence,int dosage,int quantite);
    void set(string nom_medicament,string frequence,int dosage,int quantite);
    string getNomMedicament();
    string getFrequence();
    int getDosage();
    int getQuantite();
    void afficheMedicament();
};


class ordonnance
{
private:
    date date_ordo;
    patient patient_ordo;
    medecin medecin_ordo;
    vector<medicament> medicament_ordo;

public:
  ordonnance();
  ordonnance(date date_ordo, medecin medecin_ordo, patient patient_ordo,vector<medicament> list_medoc);
  void set(date date_ordo, medecin medecin_ordo, patient patient_ordo,vector<medicament> list_medoc);
  date getDateDeliverance();
  medecin getMedecinOrdo();
  patient getPatientOrdo();
  void annulationOrdonnance();
  void afficheOrdonnance();
};
