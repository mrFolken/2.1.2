#pragma once
#include <string>

using namespace std;

class Planet
{
private:
	string namePlanet;
	tm openDate;
	double radius;

public:

	void setNamePlanet(string);
	void setOpenDate(tm);
	void setRadius(double);

	string getNamePlanet(void);
	tm getOpenDate(void);
	double getRadius(void);

	Planet(void);
	~Planet(void);
};

