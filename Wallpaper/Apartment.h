#pragma once
#include <iostream>
//#include <string>
#include "Room.h"
#include "WallpaperRoll.h"

using namespace std;

class Apartment
{
	Room* Roomslist;

public:
	
	//double getPriceAll();
	
	Apartment()
	{
		cout << " Constructor Apartment " << endl;
	}
	
	~Apartment()
	{
		cout << " Destructor Apartment " << endl;
		delete[] Roomslist;
	}
	double getPriceAll();
};

