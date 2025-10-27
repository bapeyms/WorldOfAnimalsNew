#pragma once
class Herbivore
{
protected:
	double weight;
	bool isAlive;
public:
	Herbivore()
	{
		weight = 0.0;
		isAlive = true;
	}
	Herbivore(double _weight, bool _isAlive)
	{
		weight = _weight;
		isAlive = _isAlive;
	}

	double GetWeight()
	{
		return weight;
	}
	bool GetIsAlive()
	{
		return isAlive;
	}
	void SetIsAlive(bool _isAlive)
	{
		isAlive = _isAlive;
	}

	void EatGrass()
	{
		weight += 10;
	}
	
};

