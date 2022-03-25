#include <iostream>

/*
Problema # 58 (pág 72):
Calcular el número de permutaciones de N cosas tomadas R a la vez. (R <= N)
*/

// @Autor:  @LaloFl
// @Fecha:  24-03-2022

using namespace std;

int permutaciones(int n, int r)
{
    int permutaciones = 1;
    for (int i = 1; i <= r; i++)
        permutaciones *= i;
    return permutaciones;
}

int main()
{
    int cosas = 0;
    bool flag = true;

    cout << "Ingrese el numero de cosas (N) que seran tomadas (R) a la vez.\n";

    while (flag)
    {
        cout << "N: ";
        cin >> cosas;
        if (cosas <= 10)
            flag = false;
        else
            cout << "El numero de cosas debe ser menor o igual a 10." << endl;
    }

    int tomadas = 0;
    flag = true;
    while (flag)
    {
        cout << "R: ";
        cin >> tomadas;
        if (tomadas <= cosas)
            flag = false;
        else
            cout << "R debe ser menor o igual a N." << endl;
    }

    cout << "Las permutaciones de " << cosas << " cosas tomadas " << tomadas << " a la vez son: " << permutaciones(cosas, tomadas) << endl;

    return 0;
}
