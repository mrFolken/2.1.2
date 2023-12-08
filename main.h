#pragma once
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <ctime>
#include <vector>
#include <iomanip>
#include "Planet.h"

void setupRusLang();
void createSunSystemFromFile(string, vector<Planet>&);
void printPlanetSystem(vector<Planet>&);
string enterFileName();
tm stringToTm(string);