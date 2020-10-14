#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include "personaje.h"

class Videojuego
{
    Personaje arreglo[5];
    size_t cont;
public:
    Videojuego();
    void agregarPersonaje(const Personaje &p);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend Videojuego& operator<<(Videojuego &v, const Personaje &p)
    {
        v.agregarPersonaje(p);

        return v;
    }
};

#endif