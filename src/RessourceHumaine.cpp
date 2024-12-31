/*
 * RessourceHumaine.cpp
 *
 *  Created on: 29 déc. 2024
 *      Author: chakr
 */

#include "RessourceHumaine.h"

RessourceHumaine::RessourceHumaine(string nom, string id, double salaire) {
	this->nom = nom;
	this->id = id;
	this->salaire = salaire;

}

void RessourceHumaine::afficherDetails() {
	cout << "ID: " << id <<
			"\nNom: " << nom <<
			"\nSalaire: " << salaire << endl;
}


