// #include "videojuego.h"
#include <fstream>

#include "personaje.hpp"

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

void Videojuego::respaldar_tabla()
{
    ofstream archivo("personajes_tabla.txt");
    if (archivo.is_open()) {
        archivo << left;
        archivo << setw(10) << "Nombre";
        archivo << setw(10) << "Tipo";
        archivo << setw(8) << "Fuerza";
        archivo << setw(6) << "Salud";
        archivo << endl;
        for (size_t i = 0; i < cont; i++) {
            Personaje &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}
void Videojuego::respaldar()
{
    ofstream archivo("personajes.txt");
    if (archivo.is_open()) {
        for (size_t i = 0; i < cont; i++) {
            Personaje &p = arreglo[i];
            archivo << p.getNombre() << endl;
            archivo << p.getTipo() << endl;
            archivo << p.getFuerza() << endl;
            archivo << p.getSalud() << endl;
        }
    }
    archivo.close();
}

void Videojuego::recuperar()
{
    ifstream archivo("personajes.txt");
    if (archivo.is_open()) {
        string temp;
        float fuerza;
        int salud;
        Personaje p;

        while (true)
        {
            getline(archivo, temp); // nombre
            if (archivo.eof()) {
                break;
            }
            p.setNombre(temp);

            getline(archivo, temp); // tipo
            p.setTipo(temp);

            getline(archivo, temp); // fuerza
            fuerza = stof(temp);  // string-to-float
            p.setFuerza(fuerza);

            getline(archivo, temp);
            salud = stoi(temp); // // string-to-int
            p.setSalud(salud);

            agregarPersonaje(p);            
        }
        
    }
    archivo.close();
}
