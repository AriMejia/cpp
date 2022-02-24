#include <iostream>

using namespace std;
int main()
{
    double subTotal = 0;
    double total = 0;
    double impuesto = 0.15;

    cout << "Ingrese el sub total de la factura: "; 
    cin >> subTotal;

    total = subTotal +(subTotal* 0.15);


    cout << endl;
    cout << "Total a pagar es: " << total << endl;


    return 0;
}