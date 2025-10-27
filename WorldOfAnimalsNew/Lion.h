#pragma once
#include "Carnivore.h"
class Lion :public Carnivore
{
public:
	Lion() :Carnivore() 
	{
		power = 180.0;
	}
	Lion(double _power) :Carnivore(_power) {}
	double GetPower()
	{
		return Carnivore::GetPower();
	}
	void EatHerbivore(Herbivore* herb)
	{
		Carnivore::EatHerbivore(herb);
	}
	void PrintLion()
	{
		cout << "power - " << GetPower();
	}
};

