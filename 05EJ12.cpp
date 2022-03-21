#include <iostream>
#include <time.h>
#include <string>

/*
Problema # 12 (pág 63):
Simular barajar manos de cinco cartas de una baraja común de 52 cartas. Cerciórese de no barajar la misma carta dos veces.
*/

// @Autor:  @LaloFl
// @Fecha:  20-03-2022

using namespace std;
class Carta
{
public:
    int valor;
    string palo, nombreValor;
    bool ocupada = false;
    Carta(int valor, string palo)
    {
        this->valor = valor;
        this->palo = palo;
        switch (valor)
        {
        case 1:
            nombreValor = "As";
            break;
        case 11:
            nombreValor = "J";
            break;
        case 12:
            nombreValor = "Q";
            break;
        case 13:
            nombreValor = "K";
            break;
        default:
            nombreValor = to_string(valor);
            break;
        }
    }
    Carta() {}
};

int main()
{
    Carta cartas[52];
    srand(time(0));

    string palos[4] = {"corazones", "diamantes", "treboles", "picas"};
    int valores[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 13; j++)
            cartas[i * 13 + j] = Carta(valores[j], palos[i]);

    int manos = 4;
    int nCartas = 5;

    for (int i = 0; i < manos; i++)
    {
        cout << "Mano " << i + 1 << ":\n";
        for (int j = 0; j < nCartas; j++)
        {
            int carta = rand() % 52;
            if (cartas[carta].ocupada)
            {
                j--;
                continue;
            }
            cartas[carta].ocupada = true;
            cout << cartas[carta].nombreValor << " de " << cartas[carta].palo << endl;
        }
        cout << endl;
    }

    return 0;
}
