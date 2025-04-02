#include "Jugador.h"
#include <iostream>

Jugador::Jugador(string nick) {
    nickname = nick;
}

void Jugador::inscribir(Videojuego* juego) {
    for (auto v : videojuegos) {
        if (v->codigo == juego->codigo) {
            cout << "Ya estás inscrito en ese videojuego.\n";
            return;
        }
    }
    videojuegos.push_back(juego);
    cout << "Inscripción realizada.\n";
}

void Jugador::mostrarVideojuegos() {
    if (videojuegos.empty()) {
        cout << "No estás inscrito en ningún videojuego.\n";
        return;
    }

    cout << "Videojuegos de " << nickname << ":\n";
    for (auto v : videojuegos) {
        cout << "- " << v->nombre << "\n";
    }
}

