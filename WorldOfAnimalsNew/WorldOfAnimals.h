#pragma once
#include "Africa.h"
#include "Wildebeest.h"
#include "Lion.h"
#include "NorthAmerica.h"
#include <vector>
class WorldOfAnimals
{
private:
	Africa* africa;
	NorthAmerica* northAmerica;
public:
	WorldOfAnimals(Africa* _africa, NorthAmerica* _northAmerica) :africa(_africa), northAmerica(_northAmerica) {}
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

		int j = 1;
		for (auto h : northAmerica->GetHerbs())
		{
			cout << "Bison #" << i << ": weight before - " << h->GetWeight();
			h->EatGrass();
			cout << "; weight after - " << h->GetWeight();
			j++;
			cout << endl;
		}
	}

	void NutritionCarnivore()
	{
		int i = 1;
		for (auto c : africa->GetCarns())
		{
			cout << "Lion #" << i << ": power before - " << c->GetPower();
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
		int j = 1;
		for (auto c : northAmerica->GetCarns())
		{
			cout << "Wolf #" << j << ": power before - " << c->GetPower();
			for (auto h : northAmerica->GetHerbs())
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

