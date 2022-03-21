#include <iostream>
#include <time.h>
#include <string>

/*
Problema # 13 (pág 63):
Si se sacan dos cartas de una baraja común de 52 cartas ¿qué porcentaje de veces las cartas serán un as y una cara (rey, reina o caballero)?
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

    int intentos = 1000000;
    int nCartas = 2;

    int coincidencias = 0;
    for (int i = 0; i < intentos; i++)
    {
        // desocupar cartas
        for (int j = 0; j < 52; j++)
            cartas[j].ocupada = false;

        int as = 0, cara = 0;
        for (int j = 0; j < nCartas; j++)
        {
            int carta = rand() % 52;
            if (cartas[carta].ocupada)
            {
                j--;
                continue;
            }
            cartas[carta].ocupada = true;
            as = cartas[carta].valor == 1 ? as + 1 : as;
            cara = cartas[carta].valor > 10 ? cara + 1 : cara;
        }
        coincidencias = as == 1 && cara == 1 ? coincidencias + 1 : coincidencias;
    }

    cout << "Las cartas dieron as y cara " << coincidencias << " veces sobre " << intentos << " intentos (" << intentos * 2 << " cartas)." << endl;
    cout << "Las cartas coinciden un " << (coincidencias * 100.0 / intentos) << "% de las veces." << endl;

    return 0;
}
