#include <iostream>
#include <fstream>
#include <Windows.h>
#include <ctime>
#include <vector>
#include <iomanip>
#include "Planet.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");//русификация
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);//русификация для ввода-вывода имени файла
	
	vector<Planet> sunSystem;
	Planet bufPlanet;

	string fileName = "Планеты";//Имя файла
	
	//cout << "Введите имя файла для загрузки - ";
	//cin >> fileName;

	fileName += ".txt";//добавляем формат файла
	ifstream fin(fileName);//создаём объект класса ifstream для записи и связываем его с файлом

	tm bufOpenDate;
	string bufStr;

	if (fin.is_open())
	{
		cout << "Файл успешно открыт!" << endl;
		while (!fin.eof())
		{
			fin >> bufStr;
			bufPlanet.setNamePlanet(bufStr);

			fin >> bufStr;
			bufOpenDate.tm_year = stoi(bufStr.substr(0, 4));
			bufOpenDate.tm_mon = stoi(bufStr.substr(5, 7));
			bufOpenDate.tm_mday = stoi(bufStr.substr(8, 9));
			bufPlanet.setOpenDate(bufOpenDate);

			fin >> bufStr;
			bufPlanet.setRadius(stod(bufStr));

			sunSystem.push_back(bufPlanet);
		}
	}
	else
		cout << "Ошибка открытия файла!" << endl;


	cout << "Название планеты | Дата открытия | Радиус"<< endl;
	for (int i = 0; i < sunSystem.size(); i++)
	{
		cout << setw(18) << left << sunSystem[i].getNamePlanet() << " "
			<< setw(4) << right << sunSystem[i].getOpenDate().tm_year << "." << setw(2) << sunSystem[i].getOpenDate().tm_mon << "." << setw(2) << sunSystem[i].getOpenDate().tm_mday << setw(6) << " "
			<< setw(10) << left << sunSystem[i].getRadius() << endl;
	}

	fin.close();//закрываем файл
}