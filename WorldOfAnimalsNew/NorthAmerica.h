#pragma once
#include "Continent.h"
#include "Bison.h"
#include "Wolf.h"
#include <iostream>
#include <vector>
using namespace std;

class NorthAmerica :public Continent
{
	vector <Bison*> herbs;
	vector <Wolf*> carns;
public:
	NorthAmerica() :Continent()
	{
		name = "North America";
	}
	NorthAmerica(string _name) :Continent(_name) {}

	void PrintName() const
	{
		cout << "CONTINENT - NORTH AMERICA" << endl;
	}
	~NorthAmerica()
	{
		for (auto h : herbs)
		{
			delete h;
		}
		for (auto c : carns)
		{
			delete c;
		}
	}
	const vector<Bison*>& GetHerbs()
	{
		return herbs;
	}
	const vector<Wolf*>& GetCarns()
	{
		return carns;
	}
	void AddPairOfNorthAmericaAnimals(Bison* b, Wolf* w)
	{
		herbs.push_back(b);
		carns.push_back(w);
	}
	void ShowNorthAmericaAnimals()
	{
		cout << "- Herbivores: " << herbs.size() << endl;
		int i = 1;
		for (Bison* h : herbs)
		{
			cout << "Bison #" << i << ": ";
			h->PrintBison();
			i++;
			cout << endl;
		}
		i = 1;
		cout << "- Carnivores: " << carns.size() << endl;
		for (Wolf* c : carns)
		{
			cout << "Wolf #" << i << ": ";
			c->PrintWolf();
			i++;
			cout << endl;
		}
	}
};

