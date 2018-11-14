#include <iostream>
#include <string>
using namespace std;

class Patient
{
  private:
    string nom;
    string prenom;
    date date_naissance;
    string groupe_sanguin;
    int nsecu;
    int ntel;

  public:
    Patient(string,int);
    void affiche_dossier();
    void nouveau_patient();
    ~Patient();
};



class medecin

{
  private:

    string Nom;

    string nsecu;

    string specialite;

  protected:

    string IDmedecin;

  public:



};

class rdv

{

    void creation ()

    void annulation()



    // Attributs

    string heure;

    string IDmedecin;

    string nsecu;


};

class ordonnance

{
  private:
    string dates_delivrance;
    string IDmedecin;
    string nsecu;
    string traitememt;

public:
  void creation_rdv();
  void annulation_rdv();

};

class date
{
  private:
    int jour;
    int mois;
    int annee;
  public:
    date();
    nouvelle_date(int,int,int);

}
