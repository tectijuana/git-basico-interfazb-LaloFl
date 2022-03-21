#include <iostream>
#include <time.h>

/*
Problema # 10 (pág 63):
Se lanzan cuatro dados. Analizar los cuatro números que salen y determinar si 0, 2, 3, ó 4 de los dados muestran el mismo valor o si dos muestran uno y el otro par otro.
*/

// @Autor:  @LaloFl
// @Fecha:  20-03-2022

using namespace std;

int tirarDado()
{
    return rand() % 6 + 1;
}

int apariciones(int arr[], int tiros, int n)
{
    int contador = 0;

    for (int i = 0; i < tiros; i++)
        contador = arr[i] == n ? contador + 1 : contador;

    return contador;
}

int main()
{
    int tiros = 4;
    int valores[tiros];
    int valApar[6];

    cout << "Se tiraron 2 dados " << tiros << " veces: " << endl;

    // seed para números aleatorios
    srand(time(0));

    for (int i = 0; i < tiros; i++)
    {
        int dado = tirarDado();
        valores[i] = dado;

        cout << "Tiro " << i + 1 << ": " << dado << endl;
    }
    cout << endl;

    for (int i = 0; i < 6; i++)
    {
        valApar[i] = apariciones(valores, tiros, i + 1);
    }

    for (int i = 0; i < 6; i++)
    {
        if (valApar[i] > 0)
        {
            cout << "Apariciones de " << i + 1 << ": " << valApar[i] << endl;
        }
    }

    return 0;
}
