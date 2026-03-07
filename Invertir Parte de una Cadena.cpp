#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    int a, b;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    cout << "Ingrese el indice a: ";
    cin >> a;

    cout << "Ingrese el indice b: ";
    cin >> b;

    int n = texto.length();

    if (a < 0)
    {
        a = 0;
    }

    if (b >= n)
    {
        b = n - 1;
    }

    if (a > b)
    {
        cout << "Error: el indice a no puede ser mayor que b." << endl;
        return 0;
    }

    while (a < b)
    {
        char temp = texto[a];
        texto[a] = texto[b];
        texto[b] = temp;
        a++;
        b--;
    }

    cout << "Texto resultante: " << texto << endl;

    return 0;
}
