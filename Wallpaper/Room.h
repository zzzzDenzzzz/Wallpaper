#pragma once
//#include <iostream>
//#include <string>
#include "WallpaperRoll.h"
using namespace std;

class Room
{
	
	double Hight;
	double Length;
	double Width;
	bool Ñeiling;
	
	

public:
	int RollsNumber;
	Wallpaper Roll;
	string RoomName;
	double setTheRoomPrice();
};

