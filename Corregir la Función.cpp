#include <iostream>

using namespace std;

int addFive(int num)
{
    return num + 5;
}

int main()
{
    int numero, respuesta;

    cout << "Ingrese un numero: ";
    cin >> numero;

    respuesta = addFive(numero);

    cout << "La respuesta es: " << respuesta << endl;

    return 0;
}