

#include <iostream>
#include <random>
using namespace std;

void Zapolney(int masik[], int mas);

int main()
{
	const int Mas1 = 15;
	const int Mas2 = 9;

	int Massik1[Mas1] = {};
	int Massik2[Mas2] = {};

	Zapolney(Massik1, Mas1);
	Zapolney(Massik2, Mas2);

	return 0;
}

void Zapolney(int masik[], int mas)
{
	for (int i = 0; i < mas; i++)
	{
		masik[i] = 1 + rand() % 30;
		cout << masik[i] << "  ";
	}
	cout << "\n\n";
}