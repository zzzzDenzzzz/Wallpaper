#include "Room.h"

double Room::setTheRoomPrice()
{
    cout << " The room name ";
    cin.ignore();
    getline(cin, room_name);
    cout << " The room hight ";
    cin >> height;
    cout << " The room width ";
    cin >> width;
    cout << " The room length ";
    cin >> length;
    cout << " With ceiling - 1 or not - 0? ";
    cin >> ceiling;

    double wallpaper_square;
    wallpaper_square = roll.setRollSquare();

    double wallpaper_price;
    wallpaper_price = roll.setRollPrice();

    double room_price;
    if (ceiling)
    {
        rolls_number = (2 * ((width + length) * height) + (width * length)) / wallpaper_square;
        room_price = rolls_number * wallpaper_price;
    }
    else
    {
        rolls_number = (2 * ((width + length) * height)) / wallpaper_square;
        room_price = rolls_number * wallpaper_price;
    }

    return room_price;
}