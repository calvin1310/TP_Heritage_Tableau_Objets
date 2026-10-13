#include "Employe.h"

void Employe::affiche()
{
	cout << prenom << " " << nom << ", " << age << " ans : " << salaire() << " SNCoin" << endl;
}

void Entreprise::affiche()
{
	float somme = 0;
	cout << "Societe : " << nom << endl;

	for (int i = 0; i < nbVendeurs; i++) {
		vendeurs[i].affiche();
		somme += vendeurs[i].salaire();
	}
	for (int i = 0; i < nbRepresentants; i++) {
		representants[i].affiche();
		somme += representants[i].salaire();
	}
	for (int i = 0; i < nbTechniciens; i++) {
		techniciens[i].affiche();
		somme += techniciens[i].salaire();
	}
	for (int i = 0; i < nbInterimaires; i++) {
		interimaires[i].affiche();
		somme += interimaires[i].salaire();
	}

	int total = nbVendeurs + nbRepresentants + nbTechniciens + nbInterimaires;
	cout << "Somme des salaires : " << somme << endl;
	cout << "Salaire moyen : " << somme / total << endl;
}