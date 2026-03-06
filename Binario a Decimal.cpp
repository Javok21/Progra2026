#include <iostream>

using namespace std;

int no_binario;
int decimal = 0, base = 1, ultimo_digito;

int main()
{
    cout << "Ingrese un numero binario: ";
    cin >> no_binario;

    while (no_binario > 0)
    {
        ultimo_digito = no_binario % 10;
        decimal += ultimo_digito * base;
        base *= 2;
        no_binario /= 10;
    }

    cout << "El numero decimal es: " << decimal << endl;

    return 0;
}