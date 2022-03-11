// Laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
            /* Задание 1*/
            cout << " \t\t Задание 1  \n";
            double Peremen_double;
            float Peremen_float;
            string Peremen_string;
            int Peremen_cheloChislen;

            cout << "Введите данные для переменной типа double: ";
            cin >> Peremen_double; cout << "\n";
            cout << "Введите данные для переменной типа float: ";
            cin >> Peremen_float; cout << "\n";
            cout << "Введите данные для переменной типа string: ";
            cin >> Peremen_string; cout << "\n";
            cout << "Введите данные для переменной типа int: ";
            cin >> Peremen_cheloChislen; cout << "\n";

            cout << "Ваша double: " << Peremen_double << " Ваша float: " << Peremen_float << " Ваша string: " << Peremen_string << " Ваша int: " << Peremen_cheloChislen << "\n\n";
            break;
        }
        case 2:
        {
            /* Задание 2*/
            cout << " \t\t Задание 2  \n";
            char sim1;
            char sim2;
            char sim3;
            char sim4;
            char sim5;
            
            cout << "Введите посимвольно слово: \n";
            cout << "Введите первый символ: \n";
            cin >> sim1; cout << "\n";
            cout << "Введите второй символ: \n";
            cin >> sim2; cout << "\n";
            cout << "Введите третий символ: \n";
            cin >> sim3; cout << "\n";
            cout << "Введите четвертый символ: \n";
            cin >> sim4; cout << "\n";
            cout << "Введите пятый символ: \n";
            cin >> sim5; cout << "\n";

            cout << "Ваше слово:"<< sim1 << sim2 << sim3 << sim4 << sim5,"\n";
            break;

        }
        case 3:
        {
            /* Задание 3*/
            cout << " \t\t Задание 3  \n\n";
            
            cout << "\t\t А почему в ресторане ей никогда не нравится то,  \n";
            cout << "\t\t что заказала она, и всегда нравится то, что заказал я? \n";
            cout << "\t\t И она начинает есть у меня из тарелки. Я ей говорю:\n";
            cout << "\t\t \<<Закажи себе тоже самое\>>. Она говорит:\<<Зачем? \n ";
            cout << "\t\t Я только попробовать\>>. И съедает половину.\n";
            cout << " \t\t      //к.ф.\"О чем говорят мужчины\"// \n\n";
            break;
        }
        case 4:
        {
            float chislo1;
            float chislo2;
            cout << "Введите два числа: \n";
            cin >> chislo1;
            cin >> chislo2;
            cout << "Сумма двух чисел: " << chislo1 + chislo2 << " Произведение двух чисел: " << chislo1 * chislo2 << " Разница двух чисел: " << chislo1 - chislo2 << " Cреднее арифметическое: " << (chislo1 + chislo2) / 2<<"\n\n"  ;
            

            break;
        }
        } 
    } while (ZadanieNum < 5);
}
       
    

    





