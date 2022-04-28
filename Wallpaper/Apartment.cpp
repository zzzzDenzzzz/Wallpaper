#include "Apartment.h"


double Apartment::getPriceAll()
{
    int NumberRooms, NumberWallpaper = 0, count, count_i = 0;
    double PriceRolls = 0, NumberRolls = 0;
    Room change;
    string AnyRollName;

    cout << " How many rooms are in your apartment there? ";
    cin >> NumberRooms;

    Roomslist = new Room[NumberRooms];

    for (int i = 0; i < NumberRooms; i++)
    {
        PriceRolls += Roomslist[i].setTheRoomPrice();
    }
   
    //сортировка по назвванию обоев, чтобы можно было потом посчитать
    count_i = 0;
    for (int i = count_i; i < NumberRooms - 1; i++)
    {
        for (int j = i + 1; j < NumberRooms; j++)
            if (Roomslist[i].Roll.PaperName == Roomslist[j].Roll.PaperName)
                
            {
                swap(Roomslist[i + 1], Roomslist[j]);
                count_i = i + 1;
            }
    }

    /*for (int i = 0; i < NumberRooms; i++)
    {
        cout << " RoomName >>" << Roomslist[i].RoomName << " RollName >> " << Roomslist[i].Roll.PaperName << " RollNumber >> " << Roomslist[i].RollsNumber << endl;
    }*/

    //считаем, сколько рулонов каждого наименования обоев потребуется
    for (int i = 0; i < NumberRooms; i++)
    {
        if (Roomslist[i].Roll.PaperName == Roomslist[i + 1].Roll.PaperName)
        {
            NumberWallpaper += Roomslist[i].RollsNumber;
        }
        else
        {
            NumberWallpaper += Roomslist[i].RollsNumber;
            cout << " Wallpaper " << Roomslist[i].Roll.PaperName << " " << NumberWallpaper << endl;
            NumberWallpaper = 0;
        }
    }

    //delete[] Roomslist;
    return PriceRolls;
}
