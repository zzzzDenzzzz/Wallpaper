#include "Apartment.h"

Apartment::~Apartment()
{
    delete[]rooms_list;
}

double Apartment::getPriceAll()
{
    cout << " How many rooms are in your apartment there? ";
    int number_rooms;
    cin >> number_rooms;

    rooms_list = new Room[number_rooms];

    double price_rolls = 0;
    for (int i = 0; i < number_rooms; i++)
    {
        price_rolls += rooms_list[i].setTheRoomPrice();
    }
   
    //сортировка по назвванию обоев, чтобы можно было потом посчитать
    int count_i = 0;
    for (int i = count_i; i < number_rooms - 1; i++)
    {
        for (int j = i + 1; j < number_rooms; j++)
            if (rooms_list[i].roll.paper_name == rooms_list[j].roll.paper_name)
                
            {
                swap(rooms_list[i + 1], rooms_list[j]);
                count_i = i + 1;
            }
    }

    int number_wallpaper = 0;
    //считаем, сколько рулонов каждого наименования обоев потребуется
    for (int i = 0; i < number_rooms; i++)
    {
        if (rooms_list[i].roll.paper_name == rooms_list[i + 1].roll.paper_name)
        {
            number_wallpaper += rooms_list[i].rolls_number;
        }
        else
        {
            number_wallpaper += rooms_list[i].rolls_number;
            cout << " Wallpaper " << rooms_list[i].roll.paper_name << " " << number_wallpaper << endl;
            number_wallpaper = 0;
        }
    }

    return price_rolls;
}