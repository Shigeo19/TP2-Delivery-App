#include <iostream>
#include <vector>
#include "livraison.h"
using namespace std;


#ifndef CLIENT_H_
#define CLIENT_H_

class Client {
private:
	string idClient;
	string nom;
	vector<Livraison*> livraisons;


public:
	Client(string id, string nom) : idClient(id), nom(nom) {}

	 void ajouterLivraison(Livraison* livraison);
	 void afficherLivraisons();
};

#endif /* CLIENT_H_ */
