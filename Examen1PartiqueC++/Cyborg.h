#pragma once
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

 class Cyborg
{
public:
	Cyborg();

	int cyborgListGen();

	double cyborgExp();

private:
	int min = 1;
	int max = 25;
	int numCyborg;
	double forceCyborg = 1.1;
	double vitesseCyborg = 0.0;
	double defenseCyborg = 2.2;
	double cyborgXp = 0.0;
	int cyborg;
	~Cyborg();
};

