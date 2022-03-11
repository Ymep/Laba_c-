

#include <iostream>
using namespace std;


    int main()
    {
        setlocale(LC_ALL, "rus");

        const int Up = 3;
        const int Gor = 5;

        int DvaMassiv[Up][Gor] = {};

        for (int i = 0; i < Up; i++)
        {
            for (int l = 0; l < Gor; l++)
            {
                DvaMassiv[i][l] = i + l;
                cout << DvaMassiv[i][l]<< " ";
            }
            cout << "\n";
        }
        return 0;
    }



