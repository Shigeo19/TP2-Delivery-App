#include <iostream>
using namespace std;
#include "RessourceHumaine.h"
#ifndef EMPLOYE_H_
#define EMPLOYE_H_

class Employe : public RessourceHumaine {


private:
	string section;

public:
	Employe(string nom, string id, double salaire, string section)
    : RessourceHumaine(nom, id, salaire), section(section) {}

	void afficherDetails();

};

#endif /* EMPLOYE_H_ */
