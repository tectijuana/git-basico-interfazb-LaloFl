#include <iostream>
#include <string>

/*
Problema # 62 (pág 72):
¿De cuántas maneras pueden entrar 15 personas a un salón de clases?
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
    int personas = 15;

    cout << "El numero de permutaciones de " << personas << " personas es: " << permutaciones(personas, personas) << endl;

    return 0;
}
