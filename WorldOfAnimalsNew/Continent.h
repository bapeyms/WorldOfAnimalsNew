#pragma once
#include <string>
using namespace std;

class Continent
{
protected:
	string name;
public:
	Continent()
	{
		name = "";
	}
	Continent(string _name)
	{
		name = _name;
	}
	virtual void PrintName() const = 0;
};

