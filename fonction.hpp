#include <iostream>
#include <string>
using namespace std;


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
    void affiche_date();
};


class patient
{
private:
    string nom_patient;
    string prenom_patient;
    date date_naissance;
    string groupe_sanguin;
    string ntel;
    string nsecu;
public:
    patient();
    patient(string nom_patient,string prenom_patient,date date_naissance,string groupe_sanguin,string ntel, string secu);
    void set(string nom_patient,string prenom_patient,date date_naissance,string groupe_sanguin,string ntel, string secu);
    string getNomPatient();
    string getPrenomPatient();
    date getDateNaissance();
    string getGroupeSanguin();
    string getNtel();
    string getNsecu();
    void affichePatient();

};

class medecin
{
private:
    string nom_medecin;
    string prenom_medecin;
    string specialite;
    string idmedecin;
public:
    medecin();
    medecin(string nom_medecin,string prenom_medecin,string specialite,string idmedecin);
    void set(string nom_medecin,string prenom_medecin,string specialite,string idmedecin);
    string getNomMedecin();
    string getPrenomMedecin();
    string getSpecialite();
    string getIdMedecin();
    void affiche_medecin();
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
    void modif_rdv();
    void annulation_rdv();
};


class medicament
{
protected:
    string nom_medicamant;
    string frequence;
    int dosage;
    int quantite;
public:
    medicament();
    medicament(string nom_medicamant,string frequence,int dosage,int quantite);
    void set(string nom_medicamant,string frequence,int dosage,int quantite);
    string getNomMedicament();
    string getFrequence();
    int getDosage();
    int getQuantite();
    void affiche_medicament();
};


class ordonnance : public medicament
{
private:
    date date_ordo;
    patient patient_ordo;
    medecin medecin_ordo;

public:
  ordonnance();
  ordonnance(date date_ordo,patient patient_ordo, medecin medecin_ordo);
  void set(date date_ordo,patient patient_ordo, medecin medecin_ordo);
  date getDateDeliverance();
  medecin getMedecinOrdo();
  patient getPatientOrdo();
  void annulation_ordonnance();
  void affiche_ordonnance();
};
