

#include <iostream>
using namespace std;


class Tiles
{

public: string brand;
public:    int size_h;
public:  int size_w;
public:  double price;
public:   void getData();
};


class Children
{
private: 
    string Name;
   string Surname;
    int Age;
public:
   void CinDan();
   void CoutDan();

};

int main()
{
    setlocale(LC_ALL, "rus");
    
    Tiles RoflCompany;
    RoflCompany.brand = "НаСпидраничах";
    RoflCompany.size_h = 10;
    RoflCompany.size_w = 20;
    RoflCompany.price = 1000;

    Tiles CringeCompany;
    CringeCompany.brand = "БазированныйКринж";
    CringeCompany.size_h = 25;
    CringeCompany.size_w = 40;
    CringeCompany.price = 1500;

    RoflCompany.getData();
    CringeCompany.getData();

    Children Oleg;
    Children Maria;

    Oleg.CinDan();
    Oleg.CoutDan();

    Maria.CinDan();
    Maria.CoutDan();
}



void Tiles::getData()
{
    cout << brand<<"  Сайз чот там X: " << size_h << " Сайз чот там W: " << size_w << " Цена: " << price << "\n";
}
void Children::CinDan()
{
    cin>> Name;
    cin >> Surname;
    cin >> Age;
}
void Children::CoutDan()
{    
    cout << Name<<"\n";
    cout << Surname << "\n";
    cout << Age << "\n";
}