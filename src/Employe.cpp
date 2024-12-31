#include <iostream>
using namespace std;
#include "Employe.h"

void Employe::afficherDetails() {

	cout << "=== Employé d'entrepôt ===" << endl;
	RessourceHumaine::afficherDetails();
	cout << "Section: " << section << endl;
}
