#include "WallpaperRoll.h"



double Wallpaper::setRollSquare()
{
    double RollSquare;
    cout << " The wallpaper name ";
    cin.ignore();
    getline(cin, PaperName);
    cout << " The roll length ";
    cin >> LengthRoll;
    cout << " The roll width ";
    cin >> WidthRoll;

    RollSquare = LengthRoll * WidthRoll;

    return RollSquare;
}

double Wallpaper::setRollPrice()
{
    double price;
    cout << " How much does one roll cost ";
    cin >> price;
    return price;
}

    
