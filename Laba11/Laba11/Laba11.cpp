

#include <iostream>
using namespace std;

int main(void) {
	double** p = 0;
	*(*(p = new double*) = new double) = 2;
	cout << **p << "\n";
	delete* p;
	delete p;
}
