#include "Client.h"

void Client::ajouterLivraison(Livraison* livraison) {
    livraisons.push_back(livraison);
}

void Client::afficherLivraisons() {
	 cout << "=== Livraisons du client :" << nom << " ===" << endl;
	 for (const auto& livraison : livraisons)
	 {
		 livraison->afficherDetails();
		 cout << "------------------------" << endl;
	 }
}
