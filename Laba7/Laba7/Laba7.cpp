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
			int i = 0;
			int chislo= 1;
			int sum = 0;
			while (chislo != 0)
			{
				cin >> chislo;
				i++;
				sum += chislo;

			}
			i--;
			cout << "Количество введеных чисел: "<< i << "\n";
			cout << "Суммва введеных чисел: " << sum << "\n";
			cout << "Средне Ариф: " << sum / i << "\n";
			
		}



		case 2:
		{
			int Start;
			int Finish;
			int Sum=0;
			cout << "Введите левый край диапозона:  ";
			cin >> Start; cout << "\n";
			cout << "Введите правый край диапозона:  ";
			cin >> Finish; cout << "\n";

			while (Start < Finish)
			{  

				if (Start % 2 != 0) Sum += Start;
				Start++;
			}
			cout << "Их сумма:  "<< Sum << "\n\n";
		}
		
		}





	} while (ZadanieNum < 3);
}