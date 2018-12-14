// Auteurs : Laine Antoine - Clayssen Quentin
#ifndef PARAMETERS_FILE_PARSING_H
#define PARAMETERS_FILE_PARSING_H


#include <string>
#include <vector>


using namespace std;

class parameters_file_parsing
{
public:
    parameters_file_parsing();
    void import_line(string const& line);
    void list_parameters() const;

// Parameters given in the OPTIONS.txt file
// Reachable from any class that include the current nom (Option_file_parsing.hpp)
    string jour;
    string mois;
    string annee;
    string nom;
    string prenom;


private:
    vector<string> split(string const& s, char delim);

};

#endif // PARAMETERS_FILE_PARSING_H
