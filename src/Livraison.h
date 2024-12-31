#include <iostream>
#include "Chauffeur.h"
using namespace std;

#ifndef LIVRAISON_H_
#define LIVRAISON_H_

class Livraison {
private:
    string idLivraison;
    Chauffeur* chauffeur;
    string typeService;  // regulier ou urgent
    string methodePaiement;  // cash ou en ligne
    string status;

public:
    Livraison(string id, Chauffeur* chauffeur, string typeService, string methodePaiement)
            : idLivraison(id), chauffeur(chauffeur), typeService(typeService),
              methodePaiement(methodePaiement), status("En attente") {
    	if (chauffeur)
        {
    		chauffeur->setDisponibilite(false);
        }
    }

    void updateStatus(string nouveauStatus);
    void afficherDetails();

};

#endif /* LIVRAISON_H_ */
