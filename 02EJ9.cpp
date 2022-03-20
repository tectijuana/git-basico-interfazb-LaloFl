#include <iostream>
#include <time.h>

/*
Problema # 9 (pág 63):
Determinar el porcentaje de veces que la suma de dos dados será 2, 3 ó 12.
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
    int tiros = 10;
    int sumVals[tiros];

    cout << "Se tiraron 2 dados " << tiros << " veces: " << endl;

    // seed para números aleatorios
    srand(time(0));

    for (int i = 0; i < tiros; i++)
    {
        int dado1 = tirarDado();
        int dado2 = tirarDado();
        sumVals[i] = dado1 + dado2;

        // MODO LARGO
        cout << "Tiro " << i + 1 << ": " << dado1 << " + " << dado2 << " = " << sumVals[i] << endl;

        // MODO COMPACTO
        // if ((i + 1) % 15 == 0)
        // {
        //     cout << sumVals[i] << endl;
        // }
        // else
        // {
        //     if (sumVals[i] > 9)
        //     {
        //         cout << sumVals[i] << "   ";
        //     }
        //     else
        //     {
        //         cout << sumVals[i] << "    ";
        //     }
        // }
    }
    cout << endl;

    int ap2 = apariciones(sumVals, tiros, 2);
    int ap3 = apariciones(sumVals, tiros, 3);
    int ap12 = apariciones(sumVals, tiros, 12);

    float porc2 = (float)ap2 / tiros * 100;
    float porc3 = (float)ap3 / tiros * 100;
    float porc12 = (float)ap12 / tiros * 100;

    cout << "Se repitieron " << ap2 << " veces el valor 2 (" << porc2 << "%)." << endl;
    cout << "Se repitieron " << ap3 << " veces el valor 3 (" << porc3 << "%)." << endl;
    cout << "Se repitieron " << ap12 << " veces el valor 12 (" << porc12 << "%)." << endl;

    return 0;
}
