#pragma once
#include "Herbivore.h"
#include <iostream>
using namespace std;

class Carnivore
{
protected:
	double power;
public:
	Carnivore()
	{
		power = 0.0;
	}
	Carnivore(double _power)
	{
		power = _power;
	}

	double GetPower()
	{
		return power;
	}

	void EatHerbivore(Herbivore* herb)
	{
		if (power > herb->GetWeight())
		{
			power += 10;
			herb->SetIsAlive(false);
		}
		else if (power < herb->GetWeight())
		{
			power -= 10;
		}
	}
};

