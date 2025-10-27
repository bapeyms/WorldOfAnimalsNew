#include <iostream>
#include "Africa.h"
#include "WorldOfAnimals.h"
using namespace std;

int main()
{
	Africa africa;
	africa.PrintName();
	Wildebeest* w1 = new Wildebeest();
	Lion* l1 = new Lion();
	Wildebeest* w2 = new Wildebeest(150.0, true);
	Lion* l2 = new Lion(200.0);
	africa.AddPairOfAfricaAnimals(w1, l1);
	africa.AddPairOfAfricaAnimals(w2, l2);
	cout << "-- ALL ANIMALS --" << endl;
	africa.ShowAfricaAnimals();
	cout << endl;

	WorldOfAnimals world(&africa);
	cout << "-- HERBIVORE MEAL --" << endl;
	world.MealsHerbivore();
	cout << endl;

	cout << "-- CARNIVORE HUNT --" << endl;
	world.NutritionCarnivore();
	cout << endl;

	cout << "-- ALL ANIMALS --" << endl;
	africa.ShowAfricaAnimals();

	return 0;
}