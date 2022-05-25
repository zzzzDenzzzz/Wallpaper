#pragma once

#include <iostream>
#include "Room.h"

using namespace std;

class Apartment
{
private:
	Room *rooms_list;
public:
	~Apartment();
	double getPriceAll();
};