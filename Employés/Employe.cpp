#include "Employe.h"
 float Employe::valeurAug = 0.0;
 int Employe::compt = 0;
Employe::Employe(string non, double sal): matricule(++compt)
{
	this->nom = nom;
	this->indiceSal = sal;
}

void Employe::afficher() const
{
		cout << "le nom" << nom << endl;
		cout << "Matricule" << matricule << endl;
		cout << "Indice" << indiceSal << endl;
		cout << "salaire" << calculeSal() << endl;

}

double Employe::calculeSal() const
{
	cout << " donner la valeur d augmentation " << endl;
	cin >> Employe::valeurAug;
	return this->indiceSal + ((this->indiceSal + Employe::valeurAug) / 100);
}

Employe::~Employe()
{
}
