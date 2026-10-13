#pragma once
#include <string>
#include <iostream>
using namespace std;

class Employe
{
	private:
		string nom, prenom;
		int age;
	public:
		Employe(string n = "", string p = "", int a = 0) : nom(n), prenom(p), age(a) {}
		virtual float salaire() { return 0; }
		void affiche();
};

class Commerciaux : public Employe
{
public:
	Commerciaux(string n = "", string p = "", int a = 0) : Employe(n, p, a){}
};

class Representant : public Commerciaux
{
	private:
		int nbprime;
		int nbDeplacement;
	public:
		Representant(string n ="", string p = "", int a = 0, int primes = 0, int depl = 0) : Commerciaux(n, p, a) { nbprime = primes, nbDeplacement = depl; }
		float salaire() override { return 50 + 5 * nbprime + 1 * nbDeplacement; }

};

class Vendeur : public Commerciaux
{
	private:
		int nbprime;
	public:
		Vendeur(string n = "", string p = "", int a = 0, int primes = 0) : Commerciaux(n, p, a) { nbprime = primes; }
		float salaire() override { return 50 + 2 * nbprime; }
};

class Technicien : public Employe
{
	private:
		float salaireBase = 40;
	public:
		Technicien(string n = "", string p = "", int a = 0) : Employe(n, p, a) {}
		float salaire() override { return salaireBase; }
};

class Interimaire : public Technicien
{
	private:
		int heures;
	public:
		Interimaire(string n = "", string p = "", int a = 0, int h= 0) : Technicien(n, p, a) { heures = h; }
		float salaire() override { return 0.5f * heures; }
};

class Entreprise
{
	public:
		string nom;
		Vendeur vendeurs[5];
		Representant representants[2];
		Technicien techniciens[3];
		Interimaire interimaires[5];
		int nbVendeurs = 0, nbRepresentants = 0, nbTechniciens = 0, nbInterimaires = 0;
		void affiche();
};