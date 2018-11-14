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
    int nsecu;
    int ntel;

  public:
    void affiche_dossier();
    void nouveau_patient();
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

    ordonnace()
    rdv()



};

class rdv

{

    void creation ()

    void annulation()



    // Attributs

    string heure;

    string idmedecin;

    string nsecu;


};

class ordonnance

{
  private:
    string dates_delivrance;

    string idmedecin;

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

};

class name_t {
private:
  /* data */

public:
  name_t (arguments);
  virtual ~name_t ();
};
