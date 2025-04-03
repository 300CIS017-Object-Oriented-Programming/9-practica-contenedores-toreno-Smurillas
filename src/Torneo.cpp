#include "Torneo.h"
#include <iostream>

void Torneo::agregarVideojuego() {
    string codigo, nombre;
    cout << "Código del videojuego: "; cin >> codigo;
    if (videojuegos.count(codigo)) {
        cout << "Ya existe ese videojuego.\n";
        return;
    }
    cin.ignore();
    cout << "Nombre del videojuego: "; getline(cin, nombre);
    videojuegos[codigo] = new Videojuego(codigo, nombre);
    cout << "Videojuego agregado.\n";
}

void Torneo::agregarJugador() {
    string nickname;
    cout << "Nickname del jugador: "; cin >> nickname;
    if (jugadores.count(nickname)) {
        cout << "Ya existe ese jugador.\n";
        return;
    }
    jugadores[nickname] = new Jugador(nickname);
    cout << "Jugador agregado.\n";
}

void Torneo::inscribirJugador() {
    string nickname, codigo;
    cout << "Nickname del jugador: "; cin >> nickname;
    if (!jugadores.count(nickname)) {
        cout << "Jugador no encontrado.\n";
        return;
    }
    cout << "Código del videojuego: "; cin >> codigo;
    if (!videojuegos.count(codigo)) {
        cout << "Videojuego no encontrado.\n";
        return;
    }
    jugadores[nickname]->inscribir(videojuegos[codigo]);
}

void Torneo::mostrarVideojuegosDeJugador() {
    string nickname;
    cout << "Nickname del jugador: "; cin >> nickname;
    if (!jugadores.count(nickname)) {
        cout << "Jugador no encontrado.\n";
        return;
    }
    jugadores[nickname]->mostrarVideojuegos();
}