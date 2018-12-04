case 1:
cout<<"Que voulez vous cree : \n 1) Patient \n 2) Medecin \n 3) Rdv \n 4) Ordonnance \n";
cin>>type;
  switch (type) {
    case 1:
    string nom;
    string prenom;
    string nsecu;
    string jnaissance;
    string mnaissance;
    string anaissance;
    string ntel;
    string sanguin;
    cout<<"Entrer Nom";
    cin>>nom;
    cout<<"Entrer prénom"<<endl;
    cin>>prenom;
    cout<<"Entrer  N° de Secu"<<endl;
    cin>>nsecu;
    cout<<"Entrer jours de naissance"<<endl;
    cin>>jnaissance;
    cout<<"Entrer mois de naissance"<<endl;
    cin>>mnaissance;
    cout<<"Entrer annee de naissance"<<endl;
    cin>>anaissance;
    cout<<"Entrer numéro de téléphone"<<endl;
    cin>>ntel;
    cout<<"Entrer groupe sanguin"<<endl;
    cin>>sanguin;
    patient nouveau(nom,prenom,date(jnaissance,mnaissance,anaissance),sanguin,ntel,nsecu);
    liste_patient.push_back(nouveau);}break;
    case 2:
    string nom;
    string prenom;
    string specialite;
    string idmedecin;
    cout<<"Entrer Nom";
    cin>>nom;
    cout<<"Entrer prénom"<<endl;
    cin>>prenom;
    cout<<"Entrer  specialite"<<endl;
    cin>>specialite;
    cout<<"Entrer idmedecin"<<endl;
    cin>>idmedecin;
    patient nouveau(nom,prenom,specialite,idmedecin);
    liste_medecin.push_back(nouveau);}break;
    case 3:
    string jrdv;
    string mrdv;
    string ardv;
    medecin medecin;
    patient patient;
    cout<<"Entrer jours du rendez-vous"<<endl;
    cin>>jrdv;
    cout<<"Entrer mois du rendez-vous"<<endl;
    cin>>mrdv;
    cout<<"Entrer annee du rendez-vous"<<endl;
    cin>>ardv;
    cout<<"Entrer IdMedecin"<<endl;
    cin>>idmedecin;
    for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
      if ((*itermedecin).getIdMedecin()==idmedecin){
        medecin=(*itermedecin);
    }
    cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
    cin>>nsecu;
    for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
      if ((*iterpatient).getNsecu()==nsecu){
        patient=(*iterpatient);
    }
    rdv nouveau(date(jrdv,mrdv,ardv),medecin,patient);
    liste_rdv.push_back(nouveau);}break;
    case 4:
    string jordonnance;
    string mordonnance;
    string aordonnance;
    string idmedecin;
    string nom_medicamant="";
    medecin medecin;
    patient patient;
    medicament liste_medoc;
    cout<<"Entrer jours du ordonnace"<<endl;
    cin>>jrdv;
    cout<<"Entrer mois du ordonnace"<<endl;
    cin>>mrdv;
    cout<<"Entrer annee du ordonnace"<<endl;
    cin>>ardv;
    cout<<"Entrer IdMedecin"<<endl;
    cin>>idmedecin;
    for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
      if ((*itermedecin).getIdMedecin()==idmedecin){
        medecin=(*itermedecin);
    }
    cout<<"Entrer numéros de sécurité sociale du patient"<<endl;
    cin>>nsecu;
    for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
      if ((*iterpatient).getNsecu()==nsecu){
        patient=(*iterpatient);
    }
    cout<<"Entrer nom de médicament pour arrêter entrer 1"<<endl;
    while(nom_medicamant!=1){

    }

    patient nouveau(nom,prenom,specialite,idmedecin);
    liste_ordonnance.push_back(nouveau);}break;

    switch (parquoi) {
      case 1:
      cout<<"Entrez Nom ";
      cin>>recherche;
      for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
        if ((*iterpatient).getNomPatient()==recherche){
          (*iterpatient).affichePatient();
      }
      }break;
      case 2:
      cout<<"Entrez Prénom : ";
      cin>>recherche;
      for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
        if ((*iterpatient).getPrenomPatient()==recherche){
          (*iterpatient).affichePatient();
      }
      }break;
      case 3:
      cout<<"Entrez Numéros de Sécurité Sociale : ";
      cin>>recherche;
      for (iterpatient=liste_patient.begin();iterpatient!=liste_patient.end();iterpatient++){
        if ((*iterpatient).getNsecu()==recherche){
          (*iterpatient).affichePatient();
      }
    }break;
  }break;
    case 2:
    cout<<"Par quoi ?\n 1) Nom\n 2) Spécialité\n 3) IdMedecin\n";
    cin>>parquoi;
    switch (parquoi) {
      case 1:
      cout<<"Entrez nom ";
      cin>>recherche;
      for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
        if ((*itermedecin).getNomMedecin()==recherche){
          (*itermedecin).afficheMedecin();
      }
      }break;
      case 2:
      cout<<"Entrez spécialité ";
      cin>>recherche;
      for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
        if ((*itermedecin).getSpecialite()==recherche){
          (*itermedecin).afficheMedecin();
      }
      }break;
      case 3:
      cout<<"Entrez ID Medecin ";
      cin>>recherche;
      for (itermedecin=liste_medecin.begin();itermedecin!=liste_medecin.end();itermedecin++){
        if ((*itermedecin).getIdMedecin()==recherche){
          (*itermedecin).afficheMedecin();
      }
      }break;
    }break;
    case 3:
    cout<<"Par quoi ?\n 1) Medecin \n 2) Patient \n 3) Dates";
    cin>>parquoi;
    switch (parquoi) {
      case 1:
      cout<<"Nom Medecin ";
      cin>>recherche;
      for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
        if ((*iterrdv).getMedecinRdv().getNomMedecin()==recherche){
          (*iterrdv).afficheRdv();
      }
      }break;
      case 2:
      cout<<"Nom Patient ";
      cin>>recherche;
      for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
        if ((*iterrdv).getPatientRdv().getNomPatient()==recherche){
          (*iterrdv).afficheRdv();
      }
      }break;
      case 3:
      cout<<"Date ";
      cin>>recherche;
      for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
        if ((*iterrdv).getDateRdv().getDateEntiere()==recherche){
          (*iterrdv).afficheRdv();
      }
      }break;
    }break;
    case 4:
    cout<<"Par quoi ?\n 1) Medecin \n 2) Patient \n 3) Dates";
    cin>>parquoi;
    switch (parquoi) {
      case 1:
      cout<<"Nom : ";
      cin>>recherche;
      for (iterrdv=liste_rdv.begin();iterrdv!=liste_rdv.end();iterrdv++){
        if ((*iterrdv).getMedecinRdv().getNomMedecin()==recherche){
          (*iterrdv).afficheRdv();
      }
      }break;
    }break;
    case 5:
    cout<<"Par quoi ?\n 1) Medecin \n 2) Patient";
    cin>>parquoi;
    switch (parquoi) {
      case 1:
      cout<<"Medecin: ";
      cin>>recherche;
      for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
        if ((*iterordonnance).getMedecinOrdo().getNomMedecin()==recherche){
          (*iterordonnance).afficheOrdonnance();
        }
        }break;
      case 2:
      cout<<"Patient: ";
      cin>>recherche;
      for (iterordonnance=liste_ordonnance.begin();iterordonnance!=liste_ordonnance.end();iterordonnance++){
        if ((*iterordonnance).getPatientOrdo().getNomPatient()==recherche){
          (*iterordonnance).afficheOrdonnance();
        }
        }break;
      }break;
