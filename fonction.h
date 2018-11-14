#include <iostream>
#include <string>
using namespace std;

class Patient
{
<<<<<<< HEAD
private:
  string nom;
  string prenom;
  string date_naissance;
  string groupe_sanguin;
  int nsecu;
  int ntel;
=======


    // Attributs

    string prenom,date_naissance,nom;

    int nsecu;
>>>>>>> db05e3d449877528d4acd10592f1b0d3680c659f

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

class ordonnace

{

    void creation ()

    void annulation()



    // Attributs

  private:

    string dates_delivrance;

    string IDmedecin;

    string nsecu;

    string traitememt;

public:
  creation



};
