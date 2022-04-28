#include "Room.h"



double Room::setTheRoomPrice()
{
    double RoomSquare, WallpaperSquare, WallpaperPrice, RoomPrice;
    cout << " The room name ";
    cin.ignore();
    getline(cin, RoomName);
    cout << " The room hight ";
    cin >> Hight;
    cout << " The room width ";
    cin >> Width;
    cout << " The room length ";
    cin >> Length;
    cout << " With ceiling - 1 or not - 0? ";
    cin >> Ñeiling;
    WallpaperSquare = Roll.setRollSquare();
    WallpaperPrice = Roll.setRollPrice();

    if (Ñeiling)
    {
        RollsNumber = (2 * ((Width + Length) * Hight) + (Width * Length)) / WallpaperSquare;
        RoomPrice = RollsNumber * WallpaperPrice;
    }
    else
    {
        RollsNumber = (2 * ((Width + Length) * Hight)) / WallpaperSquare;
        RoomPrice = RollsNumber * WallpaperPrice;
    }
    return RoomPrice;
}