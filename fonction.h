#include <iostream>
#include <string>
using namespace std;

class Patient
{


    // Attributs

    string prenom;

    string date_naissance;

    string nom;

    int nsecu;

  public:
    Patient(string,int);


};



class medecin

{
private:

    string nom;

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
