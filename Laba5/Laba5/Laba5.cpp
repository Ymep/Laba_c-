#include <iostream>
using namespace std;



int main()
{
    int DayofWeek=1 ;
    int ZadanieNum = 0;
    do {
        setlocale(LC_ALL, "rus");
        cout << "Введите номер задания: ";
        cin >> ZadanieNum; cout << "\n";

        switch (ZadanieNum)
        {
        case 1:
        {   cout << "Введите день недели:\n ";
              cin >> DayofWeek; cout << "\n";


            switch (DayofWeek)
            {
            case 1:
            {
                cout << "понедельник\n\n ";
                break;
            }
            case 2:
            {
                cout << "вторник\n\n ";
                break;
            }
            case 3:
            {
                cout << "среда\n\n ";
                break;
            }
            case 4:
            {
                cout << "четверг\n\n ";
                break;
            }
            case 5:
            {
                cout << "пятница\n\n ";
                break;
            }
            case 6:
            {
                cout << "суббота\n\n ";
                break;
            }
           
            


           }

        }
        case 2:
        {
            char answer; // будет хранить выбор пользователя
            bool var = true; // управляющая переменная цикла do while

            cout << "Введите букву из перечня, для расчета времени в пути (A,B,C,D,E): ";

            do {
                var = false; // для выхода из цикла, если не сработает default 
                // т.е. если найдется подходящий case
                cin >> answer; // ввод значения

                switch (answer) // switch принимает символ answer и ищет подходящий case
                {
                case 'a':
                case 'A':  // если answer содержит а или А
                    cout << "Станция метро Trinitat Nova: ";
                    cout << "Время в пути - 15 мин." << endl;
                    break;
                case 'b':
                case 'B':
                    cout << "Станция метро Casa de l’Aigua: ";
                    cout << "Время в пути - 19 мин." << endl;
                    break;
                case 'c':
                case 'C':
                    cout << "Станция метро Torre Baro Vallbona: ";
                    cout << "Время в пути - 25 мин." << endl;
                    break;
                case 'd':
                case 'D':
                    cout << "Станция метро Ciutat Meridiana: ";
                    cout << "Время в пути - 30 мин." << endl;
                    break;
                case 'e':
                case 'E':
                    cout << "Станция метро Can Cuias: ";
                    cout << "Время в пути - 38 мин." << endl;
                    break;
                default: // если ни один case не сработал, сработает default
                    cout << answer << " - некорректный ввод! ";
                    cout << "Сделайте правильный выбор (A,B,C,D,E): ";
                    var = true;  // снова присвоим true, чтобы цикл повторил работу
                }
            } while (var);  // цикл повторяется, пока var будет true
            
            return 0;
        }
        }
    }while (ZadanieNum < 3);
}