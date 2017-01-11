/* kalkulatorek macka wersja alfa v.0.1
proste jak twoja matka */

#include <iostream>
#include <cstdlib>

using namespace std;


int wybor;
float x,y;


void liczenie()
{
    switch(wybor)
    {
    case 1:
        cout << "Suma to: "<< x+y <<endl;
        break;
    case 2:
        cout << "Roznica to: "<< x-y <<endl;
        break;
    case 3:
        cout << "Iloczyn to: "<< x*y <<endl;
        break;
    case 4:
        cout << "Iloraz to: "<< x/y <<endl;
        break;
    case 0:
        exit(0);
        break;
    default:
        cout << "Nie ma takiego wyboru!"<<endl;cout << "Suma to: "<< x+y <<endl;

    }
}


int main()
{
    
    cout << "Podaj 1 liczbe: ";
    cin >> x;
    cout << "Podaj 2 liczbe: ";
    cin >> y;
    
    
    cout << "|     KALKULATOR W CHUJ     |"<<endl;
    cout << "|       1. DODAWANIE        |"<<endl;
    cout << "|      2. ODEJMOWANIE       |"<<endl;
    cout << "|       3. MNOZENIE         |"<<endl;
    cout << "|      4. DZIELENIE         |"<<endl;
    cout << "|       0. WYJSCIE          |"<<endl;
    cin >> wybor;

    liczenie();
    
    return 0;
}
