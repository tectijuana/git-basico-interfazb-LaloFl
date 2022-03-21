#include <iostream>
#include <string>

/*
Problema # 15 (pág 64):
El conjunto de números que aparece con fre-cuencia e importancia en probabilidad y análi-sis es N factorial (N!):
N! = 1 x 2 x 3 x 4 x 5 x ... x (N— 1) x N
Generar una tabla de factoriales hasta cierto valor especificado de N.
*/

// @Autor:  @LaloFl
// @Fecha:  21-03-2022

using namespace std;

int main()
{
    int n;

    cout << "Ingrese un valor de N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << "! = ";
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
            string str = j != i ? " x " : " = ";
            cout << j << str;
        }
        cout << factorial << endl;
    }

    return 0;
}
