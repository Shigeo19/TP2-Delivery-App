#include <iostream>
#include "Chauffeur.h"
#include "Client.h"
#include "Livraison.h"
#include "RessourceHumaine.h"
#include "Employe.h"

using namespace std;

int main() {
	Employe emp1("Anas Chakrone", "EMP001", 2500, "Stockage");
	Chauffeur chauf1("Mouad Lachguer", "CH001", 3000, "CAMION");

	    // Création d'un client
	Client client1("CL001", "Salah Elouafi");

	    // Création d'une livraison
	Livraison* liv1 = new Livraison("LIV001", &chauf1, "URGENT", "EN_LIGNE");

	    // Ajout de la livraison au client
	client1.ajouterLivraison(liv1);

	    // Affichage des détails
    emp1.afficherDetails();
	cout << "\n";
	chauf1.afficherDetails();
    cout << "\n";
	client1.afficherLivraisons();

	    // Mise à jour du status de la livraison
    liv1->updateStatus("Terminée");	return 0;
}
