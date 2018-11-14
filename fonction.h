#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
  string nom;
  string prenom;
  string date_naissance;
  string groupe_sanguin;
  int nsecu;

  public:
    Patient(string,int);
    void affiche_dossier();
    void nouveau_patient();
    ~Patient();



};

Patient::Patient(string prenom, string date_naissance, string nom, int nsecu){
this->nsecu = nsecu;

this->prenom = prenom;

this->date_naissance = date_naissance;

this->nom = nom;

}


class medecin

{

    void ordonnance ()

    {

    }


    void rdv()

    {


    }



    // Attributs

    string Nom;

    string IDmedecin;

    string nsecu;

    string specialite;


};

class rdv

{

    void creation ()

    {

    }


    void annulation()

    {


    }



    // Attributs

    string heure;

    string IDmedecin;

    string nsecu;


};

class ordonnace

{

    void creation ()

    {

    }


    void annulation()

    {


    }



    // Attributs

    string dates_delivrance;

    string IDmedecin;

    string nsecu;

    string traitememt;


};
