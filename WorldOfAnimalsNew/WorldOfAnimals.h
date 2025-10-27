#pragma once
#include "Africa.h"
#include "Wildebeest.h"
#include "Lion.h"
#include <vector>
class WorldOfAnimals
{
private:
	Africa* africa;
public:
	WorldOfAnimals(Africa* _africa) :africa(_africa) {}
	void MealsHerbivore()
	{
		int i = 1;
		for (auto h: africa->GetHerbs())
		{
			cout << "Wildebeest #" << i << ": weight before - " << h->GetWeight();
			h->EatGrass();
			cout << "; weight after - " << h->GetWeight();
			i++;
			cout << endl;
		}
	}

	void NutritionCarnivore()
	{
		int i = 1;
		for (auto c : africa->GetCarns())
		{
			cout << "Carnivore #" << i << ": power before - " << c->GetPower();
			for (auto h : africa->GetHerbs())
			{
				if (h->GetIsAlive())
				{
					c->EatHerbivore(h);
					break;
				}
			}
			cout << "; power after - " << c->GetPower();
			i++;
			cout << endl;
		}
	}
};

