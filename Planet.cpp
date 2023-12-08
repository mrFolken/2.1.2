#include "Planet.h"

void Planet::setNamePlanet(string buf)
{
	namePlanet = buf;
}

void Planet::setOpenDate(tm buf)
{
	openDate = buf;
}

void Planet::setRadius(double buf)
{
	radius = buf;
}

string Planet::getNamePlanet(void)
{
	return namePlanet;
}

tm Planet::getOpenDate(void)
{
	return openDate;
}

double Planet::getRadius(void)
{
	return radius;
}

Planet::Planet(void)
{

}

Planet::~Planet(void)
{

}
