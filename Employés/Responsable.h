#pragma once
#include "Employe.h"
class Responsable :
    public Employe
{
private:
    Employe** sub;//double ** est obligatoire pour stocker un tableau de pointeurs vers des objets employes ,des ponteurs pas des objets .
    int nbrsub;
	int cap;
public:
	void afficher() const override ;
	Responsable(string, double, int);
	~Responsable();
	void ajouterEmploye(Employe* E);

};