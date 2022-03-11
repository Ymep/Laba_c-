

#include <iostream>
using namespace std;

int main()
{
    int ZadanieNum = 0;
    setlocale(LC_ALL, "rus");
    cout << "Введите номер задания: ";
    cin >> ZadanieNum; cout << "\n";
    do {
        switch (ZadanieNum)
        {
        case 1: {

            int Chislo = 0;
            
            cout << "Введите число: \n ";
                cin >> Chislo;
                if (Chislo <= 9999 and Chislo >= 1)
                {
                if ((Chislo / 1000) % 10 == 1) cout << "Одна тысяча ";
                else if ((Chislo / 1000) % 10 == 2) cout << "Две тысячи ";
                else if ((Chislo / 1000) % 10 == 3) cout << "Три тысячи ";
                else if ((Chislo / 1000) % 10 == 4) cout << "Четыре тысячи ";
                else if ((Chislo / 1000) % 10 == 5) cout << "Пять тысяч ";
                else if ((Chislo / 1000) % 10 == 6) cout << "Шесть тысяч ";
                else if ((Chislo / 1000) % 10 == 7) cout << "Семь тысяч ";
                else if ((Chislo / 1000) % 10 == 8) cout << "Восемь тысяч ";
                else if ((Chislo / 1000) % 10 == 9) cout << "Девять тысяч ";


                if ((Chislo / 100) % 10 == 1) cout << "сто ";
                else if ((Chislo / 100) % 10 == 2) cout << "двести ";
                else if ((Chislo / 100) % 10 == 3) cout << "триста ";
                else if ((Chislo / 100) % 10 == 4) cout << "четыреста ";
                else if ((Chislo / 100) % 10 == 5) cout << "пятьсот ";
                else if ((Chislo / 100) % 10 == 6) cout << "шестьсот ";
                else if ((Chislo / 100) % 10 == 7) cout << "семьсот ";
                else if ((Chislo / 100) % 10 == 8) cout << "восемьсот ";
                else if ((Chislo / 100) % 10 == 9) cout << "девятьсот ";

                if ((Chislo / 10) % 10 == 1)
                {
                    if (Chislo % 10 == 0) cout << "десять долларов";
                    else if (Chislo % 10 == 1) cout << "одинадцать долларов";
                    else if (Chislo % 10 == 2) cout << "двенадцать долларов";
                    else if (Chislo % 10 == 3) cout << "тринадцать долларов";
                    else if (Chislo % 10 == 4) cout << "четырнадцать долларов";
                    else if (Chislo % 10 == 5) cout << "пятнадцать долларов";
                    else if (Chislo % 10 == 6) cout << "шестнадцать долларов";
                    else if (Chislo % 10 == 7) cout << "семнадцать долларов";
                    else if (Chislo % 10 == 8) cout << "восемнадцать долларов";
                    else if (Chislo % 10 == 9) cout << "девятнадцать долларов";
                }

                if ((Chislo / 10) % 10 == 2) cout << "двадцать ";
                else if ((Chislo / 10) % 10 == 3) cout << "тридцать ";
                else if ((Chislo / 10) % 10 == 4) cout << "сорок ";
                else if ((Chislo / 10) % 10 == 5) cout << "пятьдесят ";
                else if ((Chislo / 10) % 10 == 6) cout << "шестьдесят ";
                else if ((Chislo / 10) % 10 == 7) cout << "семьдесят ";
                else if ((Chislo / 10) % 10 == 8) cout << "восемьдесят ";
                else if ((Chislo / 10) % 10 == 9) cout << "девяносто ";

                if ((Chislo / 10) % 10 != 1)
                {
                    if (Chislo % 10 == 0) cout << "долларов\n";
                    else if (Chislo % 10 == 1) cout << "один доллар\n";
                    else if (Chislo % 10 == 2) cout << "два доллара \n";
                    else if (Chislo % 10 == 3) cout << "три доллара\n ";
                    else if (Chislo % 10 == 4) cout << "четыре доллара\n ";
                    else if (Chislo % 10 == 5) cout << "пять долларов\n ";
                    else if (Chislo % 10 == 6) cout << "шесть долларов \n";
                    else if (Chislo % 10 == 7) cout << "семь долларов\n ";
                    else if (Chislo % 10 == 8) cout << "восемь долларов \n";
                    else cout << "девять долларов\n ";

                }
                break;

            }
                else

                {
                    cout << "Вы вышли из лимита \n ";
                }
                
                break;
            }

        case 2:
        {
            int chislo;

            cout << "Введите номер пальца: \n ";
            cin >> chislo;
            cout << "Ваш палец по нумерации слева-направо: "<< "\n ";
            if (chislo == 1) cout << "левый мизинец\n\n";
            else if (chislo == 2) cout << "левый безымянный\n\n";
            else if (chislo == 3) cout << "левый  средний\n\n";
            else if (chislo == 4) cout << " левый указательный\n\n";
            else if (chislo == 5) cout << "левый большой\n\n";
            else if (chislo == 6) cout << "правый большой\n\n";
            else if (chislo == 7) cout << "правый указательный\n\n";
            else if (chislo == 8) cout << "правый средний\n\n";
            else if (chislo == 9) cout << "правый безымянный\n\n";
            else if (chislo == 10) cout << "правый мизинец\n\n";
           
        }
        case 3:
        {
            int Chislo = 0;
            int Chislo1 = 0;
            int Chisliko;
            cout << "Введите число однозначно и следом еще одно: \n ";
            cin >> Chislo;
            cin >> Chislo1;
            if (Chislo <= 10 and Chislo >= 1)
            {
                cout << "Чему равно произведение "<<Chislo<<" и " << Chislo1 << " ?:\n";
                cin >> Chisliko;
                if (Chisliko != Chislo * Chislo1)
                {
                    cout << "Неверно, правильно: "<< Chislo * Chislo1;
                }
                else cout << "умничка емае\n\n";

            }
            else
            {
                cout << "Вы вышли из лимита \n ";
            }
        }
        }





    } while (ZadanieNum < 3);
}

