#include <iostream>
#include <string>

/*
Problema # 17 (pág 64):
Determinar la probabilidad de que un número entre 2 y 100 sea primo
*/

// @Autor:  @LaloFl
// @Fecha:  21-03-2022

using namespace std;

int main()
{
    int primosCounter = 0, inicio = 2, fin = 100;

    for (int i = inicio; i < fin; i++)
    {
        primosCounter++;
        for (int j = inicio; j < i; j++)
        {
            if (i % j == 0 && j != i)
            {
                primosCounter--;
                break;
            }
        }
    }

    cout << primosCounter << " numeros primos entre " << inicio << " y " << fin << endl;

    cout << "La probabilidad de que un numero entre " << inicio << " y " << fin << " sea primo es de " << (float)primosCounter * 100 / (fin - inicio) << "%." << endl;

    return 0;
}
