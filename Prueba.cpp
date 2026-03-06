#include <iostream>

using namespace std;

int main()
{
    /*cout << "Hello, World!" << endl;*/
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero % 2 == 0)
    {
        cout << "Es par";
    }
    else
    {
        cout << "Es impar";
    }
    return 0;
}