#pragma once
#include "Herbivore.h"
#include <iostream>
using namespace std;

class Bison :public Herbivore
{
public:
	Bison() :Herbivore()
	{
		weight = 460.0;
	}
	Bison(double _weight, bool _isAlive) :Herbivore(_weight, _isAlive) {}

	double GetWeight()
	{
		return Herbivore::GetWeight();
	}
	bool GetIsAlive()
	{
		return Herbivore::GetIsAlive();
	}
	void SetIsAlive(bool _isAlive)
	{
		Herbivore::SetIsAlive(_isAlive);
	}

	void EatGrass()
	{
		Herbivore::EatGrass();
	}

	void PrintBison()
	{
		cout << "weight - " << GetWeight() << "; is alive (1 - alive, 0 - dead) - " << GetIsAlive();
	}
};

