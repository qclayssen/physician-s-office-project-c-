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
};


class patient
{
  private:
    string nom;
    string prenom;
    date date_naissance;
    string groupe_sanguin;
    string ntel;
    streing nsecu;
  public:
    patient();
    patient(string nom,string prenom,date date_naissance,string groupe_sanguin,string ntel, string secu);
    void affiche_dossier();
};

class medecin
{
  private:
    string nom;
    string prenom;
    string specialite;
    string idmedecin;
  public:
    medecin();
    medecin(string nom,string prenom,string specialite,string idmedecin);
};

class rdv
{
  private:
    date date_rdv;
  public:
    rdv();
    rdv(date date_rdv, medecin medecin, patient patient);
    void modif_rdv();
    void annulation_rdv();
};


class medicament
{
  private:
    string nom;
    string frequence;
    int dosage;
    int quantite;
  public:
    medicament();
    medicament(string nom,string frequence,int dosage,int quantite);
};


class ordonnance
{
  private:
    string dates_delivrance;
    string idmedecin;
    string nsecu;
    medicament traitememt;

public:
  ordonnance();
  ordonnance(string date,string idmedecin,string nsecu,medicament traitement);
  void annulation_ordonnance();
};
