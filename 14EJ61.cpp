#include <iostream>

/*
Problema # 61 (pág 72):
Enlistar todos los posibles arreglos de los tres primeros enteros.
*/

// @Autor:  @LaloFl
// @Fecha:  24-03-2022

using namespace std;

int main()
{
    int arreglo[] = {1, 2, 3};

    cout << "Todas las posibles permutaciones de los tres primeros enteros son: " << endl;

    int loop = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (i != j && i != k && j != k)
                    cout << loop++ << ". " << arreglo[i] << " " << arreglo[j] << " " << arreglo[k] << endl;
            }
        }
    }

    return 0;
}
