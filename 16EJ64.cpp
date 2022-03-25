#include <iostream>
#include <string>

/*
Problema # 62 (pág 72):
¿Cuántos posibles órdenes de bateo hay para un equipo de béisbol de 9 jugadores?
*/

// @Autor:  @LaloFl
// @Fecha:  24-03-2022

using namespace std;

long long permutaciones(int n, int r)
{
    long long permutaciones = 1;
    for (int i = 1; i <= r; i++)
        permutaciones *= i;
    return permutaciones;
}

int main()
{
    int jugadores = 9;

    cout << "El numero de permutaciones de " << jugadores << " jugadores es: " << permutaciones(jugadores, jugadores) << endl;

    return 0;
}
