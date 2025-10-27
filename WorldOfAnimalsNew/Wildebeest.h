#pragma once
#include "Herbivore.h"
#include <iostream>
using namespace std;

class Wildebeest :public Herbivore
{
public:
	Wildebeest() :Herbivore()
	{
		weight = 160.0;
	}
	Wildebeest(double _weight, bool _isAlive) :Herbivore(_weight, _isAlive) {}

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
	
	void PrintWildebeest()
	{
		cout << "weight - " << GetWeight() << "; is alive (1 - alive, 0 - dead) - " << GetIsAlive();
	}
};

