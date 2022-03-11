

#include <iostream>
#include <random>
using namespace std;

int main()
{
    const int n = 50;
    int randomChislo;
    int RandomMas[n];
    for (int i = 0; i < n; i++)
    {
        randomChislo = 1 + rand() % 99;

        while (randomChislo % 2 != 0) {

            randomChislo = 1 + rand() % 99;
        }
        RandomMas[i] = randomChislo;
        cout<< RandomMas[i] << " ";
        
    }
}

