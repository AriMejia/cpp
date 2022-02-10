/* Proposito: Crear un programa que simule una factura con descuento y exanta
   Ariel Aminadad Mejia Diaz
   #20182030543
   lenguaje de programacion #1
   */
   
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double subTotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char EstaExenta;
    
    cout << "\nIngrese el sub total de la factura: ";
    cin >> subTotal;
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    cout << "Esta exenta la factura, presione S de si o N de no: ";
    cin >> EstaExenta;

    if (EstaExenta == 's' || EstaExenta == 'S')
    {
        calculoDescuento = (subTotal * descuento) / 100;
        calculoImpuesto = (subTotal - descuento) * 0;
        total = subTotal - calculoDescuento + calculoImpuesto;

        cout << "\nEl total a pagar es de: " << total << endl;
    }

    if (EstaExenta == 'n' || EstaExenta == 'N')
    {
        calculoDescuento = (subTotal * descuento) / 100;
        calculoImpuesto = (subTotal - descuento) * 0.15;
        total = subTotal - calculoDescuento + calculoImpuesto;

        cout << "\nEl total a pagar es de: " << total << endl;
    }

    return 0;
}