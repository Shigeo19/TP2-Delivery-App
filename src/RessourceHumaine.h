#include<iostream>
using namespace std;
#ifndef RESSOURCEHUMAINE_H_
#define RESSOURCEHUMAINE_H_

class RessourceHumaine {


protected:
	string nom;
	string id;
	double salaire;

public:
	RessourceHumaine(string nom, string id, double salaire);
	void afficherDetails();



};

#endif /* RESSOURCEHUMAINE_H_ */
