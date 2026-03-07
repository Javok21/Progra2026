#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: la cantidad debe ser mayor que cero." << endl;
        return 0;
    }

    int arreglo[100];
    int inverso[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    for (int i = 0; i < n; i++)
    {
        inverso[i] = -arreglo[i];
    }

    cout << "Arreglo original: [";
    for (int i = 0; i < n; i++)
    {
        cout << arreglo[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "Arreglo inverso: [";
    for (int i = 0; i < n; i++)
    {
        cout << inverso[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
