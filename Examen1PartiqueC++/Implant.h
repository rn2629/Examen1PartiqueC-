#pragma once
#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

class Implant
{
public:
	Implant();

	string implantList();

	string implantRare();

private:
	
	string rare = "";
	int prix = 50;
	string nomImplant = "";

	~Implant();
};

