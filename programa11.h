#include <iostream>
using namespace std;

int main11()
{
    int decimal;
    short binario[8];

    cout << "Ingrese el valor decimal a convertir:" << endl;
    cin >> decimal;

    for (int i = 0; i < 8; i++)
    {
        binario[i] = decimal % 2;
        decimal /= 2;
    }

    cout << "El numero en binario es:" << endl;

    for (int i = 7; i >= 0; i--)
    {
        cout << binario[i];
    }

    cout << endl;
    system("PAUSE");
}
