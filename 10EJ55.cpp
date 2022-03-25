#include <iostream>
#include <time.h>

/*
Problema # 55 (pág 72):
En una clase hay 20 estudiantes: 6 de 18 años, 10 de 19 y 4 de 20. Se escoge uno al azar ¿de qué edad será?
*/

// @Autor:  @LaloFl
// @Fecha:  24-03-2022

using namespace std;

int randomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    srand(time(0));
    int edades[] = {
        18, 18, 18, 18, 18, 18,
        19, 19, 19, 19, 19, 19, 19, 19, 19, 19,
        20, 20, 20, 20};

    cout << "El estudiante elegido es de " << edades[randomNumber(0, 19)] << " anios." << endl;

    return 0;
}
