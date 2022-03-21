#include <iostream>
#include <time.h>

/*
Problema # 1 (pág 61):
Simular caída de una moneda.
*/

// @Autor:  @LaloFl
// @Fecha:  20-03-2022

using namespace std;

int main()
{
    int moneda;
    int contador_aguila = 0;
    int contador_sol = 0;

    int tiros;
    cout << "Cuantos tiros de moneda quieres hacer?: ";
    cin >> tiros;

    // seed para números aleatorios
    srand(time(0));

    for (int i = 0; i < tiros; i++)
    {
        moneda = rand() % 2;
        if (moneda == 0)
        {
            contador_aguila++;
        }
        else
        {
            contador_sol++;
        }
    }

    cout << "Aguila: " << contador_aguila << endl;
    cout << "Sol: " << contador_sol << endl;

    return 0;
}
