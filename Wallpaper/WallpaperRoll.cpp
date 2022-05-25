#include "WallpaperRoll.h"

double Wallpaper::setRollSquare()
{
    cout << " The wallpaper name ";
    cin.ignore();
    getline(cin, paper_name);
    cout << " The roll length ";
    cin >> length_roll;
    cout << " The roll width ";
    cin >> width_roll;

    double roll_square;
    roll_square = length_roll * width_roll;

    return roll_square;
}

double Wallpaper::setRollPrice()
{
    cout << " How much does one roll cost ";
    double price;
    cin >> price;
    return price;
}