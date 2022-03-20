#include <iostream>

/*
Problema # 14 (pág 55):
Introducir las longitudes de la hipotenusa y un cateto de un triángulo rectángulo. Determinar el seno, coseno y tangente de cualquiera de los ángulos agudos del triángulo.
*/

// @Autor:  @LaloFl
// @Fecha:  13-03-2022

using namespace std;

int func()
{
}

int main()
{
    float hipotenusa, cateto;
    float seno, coseno, tangente;

    cout << "Introduzca la longitud de la hipotenusa: ";
    cin >> hipotenusa;
    cout << "Introduzca la longitud del cateto: ";
    cin >> cateto;

    seno = cateto / hipotenusa;
    coseno = hipotenusa / cateto;
    tangente = cateto / hipotenusa;

    cout << "El seno del ángulo agudo es: " << seno << endl;
    cout << "El coseno del ángulo agudo es: " << coseno << endl;
    cout << "La tangente del ángulo agudo es: " << tangente << endl;

    return 0;
}
