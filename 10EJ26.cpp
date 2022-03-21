#include <iostream>
#include <string>
#include <time.h>

/*
Problema # 26 (pág 65):
Suponer que las letras C, E, M, O, P, R, T, U se seleccionan al azar. ¿Cuál es la probabilidad de que el orden de las letras produzca la palabra COMPUTER?
*/

// @Autor:  @LaloFl
// @Fecha:  21-03-2022

using namespace std;

int randomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

string generarAleatorio()
{
    char letras[] = {'C', 'E', 'M', 'O', 'P', 'R', 'T', 'U'};
    string palabra = "";
    for (int i = 0; i < 8; i++)
    {
        char letra = letras[randomNumber(0, 7)];
        letra = static_cast<char>(letra);
        if (palabra.find(letra) != string::npos)
            i--;
        else
            palabra += letra;
    }
    if (palabra == "COMPUTER")
        cout << "La palabra " << palabra << " fue generada al azar." << endl;

    return palabra;
}

int permutacion(int n, int r)
{
    int p = 1;
    for (int i = n; i > n - r; i--)
        p *= i;
    return p;
}

int main()
{
    int iteraciones = 1000000, coincidencias = 0;
    srand(time(0));
    for (int i = 0; i < iteraciones; i++)
    {
        string palabra = generarAleatorio();
        if (palabra == "COMPUTER")
            coincidencias++;
    }

    cout << coincidencias << " veces (de " << iteraciones << " intentos) la palabra generada fue COMPUTER." << endl;
    cout << "Segun los resultados, la probabilidad de que el orden de las letras produzca la palabra COMPUTER es de " << (float)coincidencias * 100 / iteraciones << "%." << endl;

    int permutaciones = permutacion(8, 8);
    cout << "Segun la formula de permutaciones, la probabilidad de que el orden de las letras produzca la palabra COMPUTER es de " << 100 / (float)permutaciones << "% (demasiado baja, uno de cada " << permutaciones << ")." << endl;

    return 0;
}
