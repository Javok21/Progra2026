#include <iostream>

using namespace std;

int main()
{
    int arreglo[5] = {10, 20, 30, 40, 50};

    cout << "Arreglo en orden descendente: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
