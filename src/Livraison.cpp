#include "Livraison.h"


void Livraison::updateStatus(string nouveauStatus) {
	status = nouveauStatus;
	if (status == "Terminée" && chauffeur)
	{
		chauffeur->setDisponibilite(true);
    }
}


void Livraison::afficherDetails() {

	cout << "=== Détails Livraison ===" << endl;
	cout << "ID Livraison: " << idLivraison << endl;
	cout << "Type de service: " << typeService << endl;
	cout << "Méthode de paiement: " << methodePaiement << endl;
	cout << "Status: " << status << endl;
}

