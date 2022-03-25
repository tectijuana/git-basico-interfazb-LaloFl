#include <iostream>

/*
Problema # 58 (pág 72):
Imprimir todas las permutaciones de N cosas tomadas N a la vez para cualquier N menor o igual que 10.
*/

// @Autor:  @LaloFl
// @Fecha:  24-03-2022

using namespace std;

int permutaciones(int n)
{
    int permutaciones = 1;
    for (int i = 1; i <= n; i++)
        permutaciones *= i;
    return permutaciones;
}

int main()
{
    int cosas = 0;
    bool flag = true;
    while (flag)
    {
        cout << "Ingrese el numero de cosas: ";
        cin >> cosas;
        if (cosas <= 10)
            flag = false;
        else
            cout << "El numero de cosas debe ser menor o igual a 10." << endl;
    }

    cout << "Las permutaciones de " << cosas << " cosas son: " << permutaciones(cosas) << endl;

    return 0;
}
