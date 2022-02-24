#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for (int i = 9; i >= 0; i--)
    {
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 1000000; i++)
    {
        cout << i << " ";
        
        if(i == 115)
        break; // rompe un ciclo
    }
    
    cout << endl;
    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
        
        if(i == 5 || i == 7 )
        continue;
    }

    return 0;
}