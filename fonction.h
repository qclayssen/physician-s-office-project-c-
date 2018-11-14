#include <iostream>
#include <string>
using namespace std;

class patient
{
  private:
    string nom;
    string prenom;
    date date_naissance;
    string groupe_sanguin;
    int ntel;
  protected:
    int nsecu;
  public:
    void affiche_dossier();
    void nouveau_patient(string,string,date,string,int,int);
};

class medecin
{
  private:
    string nom;
    string prenom;
    string specialite;
  protected:
    string idmedecin;
  public:
    void nouveau_medecin(string,string,string,string)
};

class rdv
{
  private:
    date date_rdv;
    string idmedecin;
    string nsecu;
  public:
    void nouveau_rdv(date,string,string);
    void modif_rdv();
    void annulation_rdv();
};


class ordonnance
{
  private:
    string dates_delivrance;
    string idmedecin;
    string nsecu;
    string traitememt;

public:
  void nouvelle_ordonnance(string,string,string,string);
  void annulation_ordonnance();
};


class date
{
  private:
    int jour;
    int mois;
    int annee;
  public:;
    void nouvelle_date(int,int,int);
};


class medicament
{
  private:
    string nom;
    string frequence;
    int dosage;
    int quantite;
  public:
    void nouveau_medicament(string,string,int,int)
}
