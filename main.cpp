#include <iostream>
#include "videojuego.h"

using namespace std;

int main() {
    Personaje p02 = Personaje(  "michel", 
                                "zombie", 
                                80.0, 
                                70);
    Personaje p03; // = Personaje();
    p03.setNombre("davalos");
    p03.setTipo("troll");
    p03.setFuerza(60.2);
    p03.setSalud(20);

    Videojuego vj;
    vj.nombre = "Michel";
    
    vj.agregarPersonaje(p02);
    vj.agregarPersonaje(p03);

    vj.mostrar();

    Videojuego vj02(vj);
    vj02.nombre = "Davalos";
    vj02 = vj;

    
    // cout << p03.getNombre() << endl;
    // cout << p03.getTipo() << endl;
    // cout << p03.getFuerza() << endl;
    // cout << p03.getSalud() << endl;



    return 0;
}