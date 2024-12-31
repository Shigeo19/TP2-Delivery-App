#include <iostream>
using namespace std;
#include "Chauffeur.h"


void Chauffeur::afficherDetails()  {
        cout << "=== Chauffeur ===" << endl;
    	RessourceHumaine::afficherDetails();
    	cout << "Type de véhicule: " << typeVehicule << endl;
    	cout << "Statut: " << (disponible ? "Disponible" : "En livraison") << endl;
    }

void Chauffeur::setDisponibilite(bool status) {
	disponible = status;
}
