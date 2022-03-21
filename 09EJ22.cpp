#include <iostream>
#include <string>
#include <time.h>

/*
Problema # 22 (pág 65):
Sacar dos números al azar entre 1 y 20. ¿Cuál es la probabilidad de que su suma sea 12?
*/

// @Autor:  @LaloFl
// @Fecha:  21-03-2022

using namespace std;

int randomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    int iteraciones = 10000000, suma12 = 0;
    srand(time(0));
    for (int i = 0; i < iteraciones; i++)
    {
        int numero1 = randomNumber(1, 20);
        int numero2 = randomNumber(1, 20);
        // cout << numero1 << " + " << numero2 << " = " << numero1 + numero2 << endl;
        suma12 = numero1 + numero2 == 12 ? suma12 + 1 : suma12;
    }

    cout << suma12 << " veces (de " << iteraciones << " intentos) la suma de dos numeros al azar entre 1 y 20 fue 12." << endl;

    cout << "La probabilidad de que su suma sea 12 es de " << (float)suma12 * 100 / iteraciones << "%." << endl;
    return 0;
}
