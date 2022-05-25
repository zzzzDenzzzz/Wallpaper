#pragma once

#include "WallpaperRoll.h"

using namespace std;

class Room
{
private:
	double height;
	double length;
	double width;
	bool ceiling;
public:
	int rolls_number;
	Wallpaper roll;
	string room_name;
	double setTheRoomPrice();
};