#include "Responsable.h"

void Responsable::afficher() const 
{
	this->Employe::afficher();
	for (int i = 0; i < this->cap; i++) {
		this->sub[i]->afficher();
	}
}

Responsable::Responsable(string n, double s, int nbrs) :Employe(n, s)
{
	this->nbrsub = nbrs;
	this->cap = 0;
	this->sub = new Employe * [this->nbrsub];
	for (int i = 0; i < this->nbrsub; i++) {
		this->sub[i] = nullptr;
	}

}

Responsable::~Responsable()
{
	delete[]this->sub;
}

void Responsable::ajouterEmploye(Employe* E)
{
	if (this->nbrsub < this->cap && E != nullptr) {
		this->sub[this->cap] = E;
		this->cap++;
	}
	else {
		cout << "Impossible d ajouter un employe" << endl;
	}
}