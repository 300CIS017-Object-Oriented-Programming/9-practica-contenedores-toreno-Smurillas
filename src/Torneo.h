#ifndef TORNEO_H
#define TORNEO_H


#include <map>
#include <string>
#include "Jugador.h"
#include "VideoJuego.h"
using namespace std;

class Torneo {
public:
    map<string, Videojuego*> videojuegos;
    map<string, Jugador*> jugadores;

    void agregarVideojuego();
    void agregarJugador();
    void inscribirJugador();
    void mostrarVideojuegosDeJugador();
};

#endif