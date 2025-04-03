#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <vector>
#include "Videojuego.h"
using namespace std;

class Jugador {
public:
    string nickname;
    vector<Videojuego*> videojuegos;

    explicit Jugador(string nick);
    void inscribir(Videojuego* juego);
    void mostrarVideojuegos();
};

#endif
