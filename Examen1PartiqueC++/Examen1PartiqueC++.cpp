#include "stdafx.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <cstdio>
#include <ctime>
#include "Cyborg.h"
#include "Implant.h"





using namespace std;


void afficherMenu()
{
	cout << " CYBERPUNK 2077" << endl;
	cout << "Choisir l'une des options suivantes :" << endl;
	cout << "1- Afficher la Liste de cyborgs " << endl;
	cout << "2- Afficher la Liste d'implants disponible " << endl;
	cout << "3-  Caracteristique du Cyborg" << endl;
}

void validerChoix(int & choix)
{
	bool choixValide = false;
	while (!choixValide)
	{
		cin >> choix;
		if (choix > 0 && choix < 4)
			choixValide = true;
		else
			cout << " Veuillez entrer un choix valide " << endl;
	}

}


int main()
{
	int choix = 0;
	afficherMenu();
	validerChoix(choix);

	Cyborg* cyb = new Cyborg();
	Implant* imp = new Implant();
	

	if (choix == 1)
	{
		cyb->cyborgListGen();
		vector<Cyborg*> tabCyborgs;
		vector<Cyborg*>::iterator it;

		for (it = tabCyborgs.begin(); it < tabCyborgs.end(); it++)
		{
			cout << (*it)->cyborgListGen() << " " << endl;
		}

	}
	else if (choix == 2)
	{
		imp->implantList();
	}
	else if (choix == 3)
	{
	//	vector<int>::iterator it;

	}
	else
		cout << "Veuillez entrer un choix valide" << endl;
		

	cout << "Appuyer sur une touche pour quitter ";
	


    return 0;
}

