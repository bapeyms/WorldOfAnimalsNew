#include <iostream>
#include "Africa.h"
#include "NorthAmerica.h"
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

	NorthAmerica northAmerica;
	northAmerica.PrintName();
	Bison* b1 = new Bison();
	Wolf* wolf1 = new Wolf();
	Bison* b2 = new Bison(500.0, true);
	Wolf* wolf2 = new Wolf(70.0);
	northAmerica.AddPairOfNorthAmericaAnimals(b1, wolf1);
	northAmerica.AddPairOfNorthAmericaAnimals(b2, wolf2);

	WorldOfAnimals world(&africa, &northAmerica);

	cout << "-- HERBIVORE MEAL --" << endl;
	world.MealsHerbivore();
	cout << endl;

	cout << "-- CARNIVORE HUNT --" << endl;
	world.NutritionCarnivore();
	cout << endl;

	cout << "-- ALL ANIMALS --" << endl;
	cout << "- AFRICA -" << endl;
	africa.ShowAfricaAnimals();
	cout << "- NORTH AMERICA -" << endl;
	northAmerica.ShowNorthAmericaAnimals();

	return 0;
}