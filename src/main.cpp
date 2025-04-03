//#include <iostream>
#include <iostream>

#include "Torneo.h"
using namespace std;

int main() {
    Torneo torneo;
    int opcion;

    do {
        cout << "\n--- Menú del Torneo ---\n";
        cout << "1. Agregar videojuego\n";
        cout << "2. Agregar jugador\n";
        cout << "3. Inscribir jugador a videojuego\n";
        cout << "4. Mostrar videojuegos de un jugador\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: torneo.agregarVideojuego();
            break;
            case 2: torneo.agregarJugador();
            break;
            case 3: torneo.inscribirJugador();
            break;
            case 4: torneo.mostrarVideojuegosDeJugador();
            break;
            case 0: cout << "Saliendo...\n";
            break;
            default: cout << "Opción inválida.\n";
        }
    } while (opcion != 0);

    return 0;
}



// Created by Santiago Murillas on 4/2/25.
//
