#include <iostream>
#include "videojuego.h"

using namespace std;

// ToDo: 
/*      + Hacer que luchen los personajes 
          cada personaje tiene golpes/defenza como comportamiento
        + Usar operadores como ->, *, / para hacer ataques
        + Generar los ataques la pelea entre los personajes de manera aleatoria
          y con un timer y un hilo, darle prioridad de salir a luchar
        + Usar herencia para crear tipos de personajes para que hereden de la clase
          Personaje, tenga métodos abstractos como cuando se recibe una tipo de golpe
          y así rebajarle un cierto tipo de valor a la fuerza y la salud.
*/

int main() {
    // Videojuego v;
    // v.recuperar();
    // v.recuperar();
    // v.mostrar();
    Personaje p02 = Personaje(  "michel", 
                                "zombie", 
                                80.0, 
                                70);
    cout << --p02;
    
    // Personaje p03; // = Personaje();
    // p03.setNombre("davalos");
    // p03.setTipo("troll");
    // p03.setFuerza(60.2);
    // p03.setSalud(20);

    // Videojuego vj;
    
    // vj.agregarPersonaje(p02);
    // vj.agregarPersonaje(p03);
    // vj << p02 << p03;


    // cout << p02;
    // Personaje p04;
    // cin >> p04;
    // vj << p04;

    // vj.mostrar();
    // vj.respaldar_tabla();
    // vj.respaldar(); // linea por linea

    
    // cout << p03.getNombre() << endl;
    // cout << p03.getTipo() << endl;
    // cout << p03.getFuerza() << endl;
    // cout << p03.getSalud() << endl;



    return 0;
}