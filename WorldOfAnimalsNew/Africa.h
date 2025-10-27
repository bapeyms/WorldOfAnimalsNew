#pragma once
#include <vector>
#include "Continent.h"
#include "Wildebeest.h"
#include "Lion.h"
using namespace std;

class Africa :public Continent
{
	vector <Wildebeest*> herbs;
	vector <Lion*> carns;
public:
	Africa() :Continent() 
	{
		name = "Africa";
	}
	Africa(string _name) :Continent(_name) {}
	~Africa()
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
	void PrintName() const
	{
		cout << "CONTINENT - AFRICA" << endl;
	}
	const vector<Wildebeest*>& GetHerbs()
	{
		return herbs;
	}
	const vector<Lion*>& GetCarns()
	{
		return carns;
	}
	void AddPairOfAfricaAnimals(Wildebeest* w, Lion* l)
	{
		herbs.push_back(w);
		carns.push_back(l);
	}
	void ShowAfricaAnimals()
	{
		cout << "- Herbivores: " << herbs.size() << endl;
		int i = 1;
		for (Wildebeest* h : herbs)
		{
			cout << "Wildebeest #" << i << ": ";
			h->PrintWildebeest();
			i++;
			cout << endl;
		}
		i = 1;
		cout << "- Carnivores: " << carns.size() << endl;
		for (Lion* c : carns)
		{
			cout << "Lion #" << i << ": ";
			c->PrintLion();
			i++;
			cout << endl;
		}
	}
};