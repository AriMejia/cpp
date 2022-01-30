#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int numeroUno = 0, numeroDos = 0;
    float resultadoSuma = 0, resultadoResta = 0, resultadoMultiplicar = 0, resultadoDividir = 0;

    cout << "*****************************************" << endl;
    cout << "***************CALCULADORA***************" << endl;
    cout << "*****************************************" << endl << endl;    
    cout << "Ingrese el primer numero: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo numero: ";
    cin >> numeroDos;

    resultadoSuma = numeroUno + numeroDos;
    resultadoResta = numeroUno - numeroDos;
    resultadoMultiplicar = numeroUno * numeroDos;
    resultadoDividir = numeroUno / numeroDos;

    cout << "El resultado es de la suma: " << resultadoSuma << endl;
    cout << "El resultado es de la resta: " << resultadoResta << endl;
    cout << "El resultado es de la multiplicacion: " << resultadoMultiplicar << endl;
    cout << "El resultado es de la divicion: " << resultadoDividir << endl;

    return 0;
}