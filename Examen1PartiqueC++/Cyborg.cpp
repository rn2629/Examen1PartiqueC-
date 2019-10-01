#include "stdafx.h"
#include "Cyborg.h"
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>


using namespace std;

Cyborg::Cyborg()
{
	cyborg = cyborgListGen();
	cyborgXp = cyborgExp();
}

int Cyborg::cyborgListGen()
{
	vector<int> tabCyborgs = { 1,30,105,210,200,555,877,655,750,1005,1023,1055,1555,2000,1850,1745,17,18,19,2018,2019,2020,2050,2035,2077,2078 };
//	rand() % (max - min + 1) + min;

	return cyborgListGen();
}

double Cyborg::cyborgExp()
{
	vector<double> tabForce = { 1.1,11.50,30.70,105.80,210.16,200.69,555.55,877.12,655.15,750.02,1005.78,1023.59,1055.578,1555.214,2000.23,1850.62,1745.258,17.12,18.18,19.210,2018.20,2019.00,2020.00,2050.232,2035.2,207.7 };
	vector<double> tabVitesse = { 2.1,121.50,350.70,105.80,210.16,200.69,555.55,877.12,655.15,750.02,105.78,1023.589,1055.578,1555.214,2000.23,1850.62,1745.258,17.12,18.18,19.210,2018.20,2019.00,2020.00,2050.232,2035.2,207.7 };
	vector<double> tabDefense = {25.1, 161.50,350.70,105.80,210.16,200.69,55.55,77.12,55.15,50.02,105.78,23.549,55.578,55.214,100.23,10.62,45.258,17.12,18.18,19.210,18.20,19.00,20.00,20.232,20.2,7.7 };
	
	return cyborgXp;
}


Cyborg::~Cyborg()
{
}
