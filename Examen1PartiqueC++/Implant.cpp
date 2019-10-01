#include "stdafx.h"
#include "Implant.h"
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

Implant::Implant()
{
	nomImplant = implantList();
	rare = implantRare();
}

string Implant::implantList()
{
	vector<string> tabImplant = { "Bras Acier","Main Argenté", "Bouclier doré", "Bouclier Bronze","Bouclier Argent", "Bouclier Legendaire","Pied de Feu", "Bras Argent/" };
	return implantList();
}

string Implant::implantRare()
{
	vector<string> tabRare = { "Regulier", "Legendaire" };
	return rare;
}

Implant::~Implant()
{
}
