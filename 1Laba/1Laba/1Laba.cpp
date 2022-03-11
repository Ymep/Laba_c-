

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	/* Задание 1*/
	double Chokolate, cofe, milk; int kchok, kcofe, kmilk, sum;
	Chokolate = 90; cofe = 180; milk = 74;

	cout << " \t\t Задание 1  \n";

	cout << "Стоимость Шоколада 90 рублей за штуку.\n ";
	cout << "Стоимость Кофе 180 рублей за штуку.\n ";
	cout << "Стоимость Молоко 74 рубля за штуку.\n\n ";

	cout << "Введите количество шоколада ";
	cin >> kchok; cout << "\n";
	cout << "Введите количество кофе ";
	cin >> kcofe; cout << "\n";
	cout << "Введите количество молока ";
	cin >> kmilk; cout << "\n";

	cout << "Вы приобретаете шоколад на сумму: " << Chokolate * kchok << " \n";
	cout << "Вы приобретаете кофена сумму: " << cofe * kcofe << " \n";
	cout << "Вы приобретаете молока на сумму: " << milk * kmilk << " \n";

	sum = (Chokolate * kchok) + (cofe * kcofe) + (milk * kmilk);

	cout << "Общая стоимость : " << sum << "\n\n";

	/*Задание 2*/

	float i1, i2, i3;

	cout << "\t\t Задание 2 \n";

	cout << "Введите значение первой переменной: ";
	cin >> i1; cout << "\n";

	i2 = i1 * 3;
	i3 = i1 + i2;

	cout << "Первое значение :" << i1 << "\n";
	cout << "Второе значение :" << i2 << "\n";
	cout << "Третье значение :" << i3 << "\n\n";



	/*Задание 3*/


	cout << "\t\t Задание 3 \n";

	int cup, saucer = 0, spoon = 0;
	cout << "Введите количество блюдец:";
	cin >> cup; cout << "\n";
	saucer = cup;
	spoon = cup;
	cout << "Количество блюдец:" << cup << "\n";
	cout << "Количество чашек: " << saucer << "\n";
	cout << "Количество ложек: " << spoon << "\n";
	return 0;
}
