

#include <iostream>
using namespace std;

int main()
{

    int t = 0;
    int ZadanieNum = 0;
    setlocale(LC_ALL, "rus");
    cout << "Введите номер задания: ";
    cin >> ZadanieNum; cout << "\n";
    do {
        switch (ZadanieNum)
        {
        case 1: {
            int i = 1;
            int chisloQuadrat;

            for (;;)
            {
                cout << "Введите число:\n ";
                cin >> chisloQuadrat; cout << "\n";
                cout << " Для выхода из цикла введите 2 \n";
                if (chisloQuadrat == 2)
                    break;
                chisloQuadrat *= chisloQuadrat;

                cout << "Ваше число " << chisloQuadrat << "\n";





            }
            break;


        }



        case 2:
        {
            int PeopleNum;
            int MaxVoz=0;
            int MinVoz=0;
            int SredAriv=0;
            int Voz=0;

            cout << "Введите число посетителй:\n ";
            cin >> PeopleNum; cout << "\n";

            for (int i = 0; i < PeopleNum; i++)
            {
                cout << "Введите возраст ";
                cin >> Voz;
                if (Voz < MinVoz) MinVoz = Voz;
                if (Voz > MaxVoz)  MaxVoz = Voz;

                SredAriv += Voz;

            }
            cout << "Самый молодой  " << MinVoz << "\n";
            cout << "Самый cтарый " << MaxVoz << "\n";
            cout << "Средний возраст  " << SredAriv / PeopleNum << "\n";
        }
        case 3:
        {
            cout << " Загрузка ящиков\n\n";
            int KorA = 15;
            int KorS = 0;
            for (int i = 1; ; i++)
            {
                cout << "Сколько ящиков загрузить в  машину? ";
                cin >> KorS;
                if (KorS > KorA)
                {

                    cout << "Осталось только " << KorA << " ящиков\n\n";
                    i= i-1;





                }
                else
                {
                    KorA -= KorS;

                    cout << "Осталось только " << KorA << " ящиков\n\n";
                }
                if (KorA == 0) break;
            }
        }
        }
                
    }while (ZadanieNum < 4);
}

