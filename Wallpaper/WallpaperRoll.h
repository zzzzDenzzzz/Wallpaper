#pragma once

#include <string>
#include <iostream>

using namespace std;

class Wallpaper
{
private:
    double length_roll;
    double width_roll;
    double price;
public:
    string paper_name;
    double setRollSquare();
    double setRollPrice();
};