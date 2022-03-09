#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    size_t cont;
public:
    Videojuego();
    ~Videojuego() = default;
    Videojuego(Videojuego const& vj) = default;
    Videojuego& operator=(const Videojuego& vj) = default;
    void agregarPersonaje(const Personaje &p);
    void mostrar();
    
    string nombre;
};

#endif