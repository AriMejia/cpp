/* Propocito: crear un programa que sume numero pares e impares
   ARIEL AMINADAD MEJIA DIAZ
   20182030543
   Lenguaje de programacion 1*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int pares = 0, impares = 0, totalSuma = 0;

    for (int i = 0; i <= 10; i++)
    {
        if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
        {
            pares = pares + i;
        }
    
        if (i == 1 ||i == 3 || i == 5 || i == 7 || i == 9)
        {
            impares = impares + i;
        }
        cout << i << endl;
    }

    totalSuma = pares + impares; 

    cout << endl;
    cout << endl;
    cout << "Total pares: " << pares << endl; 
    cout << "Total de impares: " << impares << endl;
    cout << "El total es: " << totalSuma << endl;

    return 0;
}