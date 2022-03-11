

#include <iostream>
using namespace std;

int main()
{
    int ZadanieNum = 0;


    do {
        setlocale(LC_ALL, "rus");
        cout << "Введите номер задания: ";
        cin >> ZadanieNum; cout << "\n";

        switch (ZadanieNum)
        {
        case 1:
        {
            int chetsreZnaz = 0;
            int f = 0;
            
            cout << "Введите четырехзначное число: ";
            cin >> chetsreZnaz; cout << "\n";
            while (chetsreZnaz > 0) {
               f *= 10;
                f = f + chetsreZnaz % 10;
                chetsreZnaz /= 10;
            }
             cout << "Ваш перевертыш: "<< f << "\n";
        }
        case 2:
        {
            float Sum;
            float Month;
            float SumMonth;
            float pribl= 0;
            cout << "Введите сумму в долларах: ";
            cin >> Sum; cout << "\n";

            cout << "Введите срок хранения: ";
            cin >> Month; cout << "\n";
            SumMonth = Sum * (0.05f )/ 365.f * 30.f;

            pribl = SumMonth;

            cout << "Проценты в месяц: " << pribl << "\n";
            pribl *= Month;
            cout << "Суммарная прибыль за все месяцы: " << pribl << "\n";
            pribl = Sum + pribl;
            cout << "Суммарная прибыль за все месяцы учитывая стартовый капитал: " << pribl << "\n";
        }

        }
    } while (ZadanieNum < 3);
}