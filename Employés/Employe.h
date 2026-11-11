#pragma once
#include <iostream>
using namespace std;
class Employe
{
private :
	string nom;
	const int matricule;
	int indiceSal;
	static float valeurAug;
	static int compt;
public:
	Employe(string,double);
	virtual void afficher() const;
	double calculeSal() const ;
	~Employe();
};

