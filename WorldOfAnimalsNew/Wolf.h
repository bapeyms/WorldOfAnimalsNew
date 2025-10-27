#pragma once
#include "Carnivore.h"
class Wolf :public Carnivore
{
public:
	Wolf() :Carnivore()
	{
		power = 70.0;
	}
	Wolf(double _power) :Carnivore(_power) {}
	double GetPower()
	{
		return Carnivore::GetPower();
	}
	void EatHerbivore(Herbivore* herb)
	{
		Carnivore::EatHerbivore(herb);
	}
	void PrintWolf()
	{
		cout << "power - " << GetPower();
	}
};

