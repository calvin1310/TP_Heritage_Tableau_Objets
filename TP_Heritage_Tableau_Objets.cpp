#include "Employe.h"

int main()
{
	Entreprise e;
	e.nom = "Promo SN-IR";

	e.vendeurs[0] = Vendeur("Dupont", "Paul", 30, 10);
	e.vendeurs[1] = Vendeur("Durand", "Pierre", 28, 5);
	e.vendeurs[2] = Vendeur("Martin", "Jacques", 35, 1);
	e.nbVendeurs = 3;

	e.representants[0] = Representant("Bernard", "Giselle", 32, 3, 10);
	e.representants[1] = Representant("Petit", "Georges", 40, 2, 8);
	e.nbRepresentants = 2;

	e.techniciens[0] = Technicien("Moreau", "Robert", 45);
	e.techniciens[1] = Technicien("Simon", "Raymond", 50);
	e.nbTechniciens = 2;

	e.interimaires[0] = Interimaire("Leroy", "Jean-Claude", 25, 75);
	e.interimaires[1] = Interimaire("Roux", "Jean-Paul", 26, 50);
	e.interimaires[2] = Interimaire("Blanc", "Jean-Marie", 27, 50);
	e.interimaires[3] = Interimaire("Faure", "Jean-Jean", 24, 0);
	e.nbInterimaires = 4;

	e.affiche();
}