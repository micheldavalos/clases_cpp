#include "videojuego.h"

Videojuego::Videojuego()
{
    cont = 0;
}

void Videojuego::agregarPersonaje(const Personaje &p)
{
    if (cont < 5) {
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}

void Videojuego::mostrar()
{
    cout << left;
    cout << setw(10) << "Nombre";
    cout << setw(10) << "Tipo";
    cout << setw(8) << "Fuerza";
    cout << setw(6) << "Salud";
    cout << endl;
    for (size_t i = 0; i < cont; i++) {
        Personaje &p = arreglo[i];
        cout << p;
        // cout << "Nombre: " << p.getNombre() << endl;
        // cout << "Tipo: " << p.getTipo() << endl;
        // cout << "Fuerza: " << p.getFuerza() << endl;
        // cout << "Salud: " << p.getSalud() << endl;
        // cout << endl;
    }
}
