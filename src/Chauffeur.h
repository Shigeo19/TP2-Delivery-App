#include <iostream>
using namespace std;
#include "RessourceHumaine.h"

#ifndef CHAUFFEUR_H_
#define CHAUFFEUR_H_

class Chauffeur : public RessourceHumaine {

private:
	string typeVehicule;
	bool disponible;

public:
	 Chauffeur(string nom, string id, double salaire, string typeVehicule)
	        : RessourceHumaine(nom, id, salaire), typeVehicule(typeVehicule), disponible(true) {}

	 void afficherDetails();

	 void setDisponibilite(bool status);
};

#endif /* CHAUFFEUR_H_ */
