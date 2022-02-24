#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int a = 5;
    int b = 2;

    while(a > b)
    {
        cout << "Ingrese el valor de a: ";
        cin >> a;
    }

    cout << endl;
    cout << "Salistes del ciclo!";


    return 0;
}