#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <iostream>
#include <iomanip>
using namespace std;

class Personaje 
{
    string nombre;
    string tipo;
    float fuerza;
    int salud;
public:
    Personaje();
    Personaje(const string &nombre,
              const string &tipo,
              float fuerza,
              int salud);
    void setNombre(const string &v);
    string getNombre();
    void setTipo(const string &v);
    string getTipo();
    void setFuerza(float v);
    float getFuerza();
    void setSalud(int v);
    int getSalud();

    Personaje& operator+(size_t salud)
    {
        this->salud += salud;

        return *this;
    }

    Personaje& operator-(size_t salud)
    {
        Personaje::salud -= salud;

        return *this;
    }

    Personaje& operator++ ()
    {
        this->fuerza++;

        return *this;
    }

    Personaje& operator++(int)
    {
        this->fuerza++;

        return *this;
    }

    Personaje& operator--()
    {
         this->fuerza--;

        return *this;
    }
    Personaje& operator--( int )
    {
         this->fuerza--;

        return *this;
    }

    friend ostream& operator<<(ostream &out, const Personaje &p)
    {
        out << left ;
        out << setw(10) << p.nombre;
        out << setw(10) << p.tipo ;
        out << setw(8) <<  p.fuerza ;
        out << setw(6) << p.salud;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, Personaje &p)
    {
        // string temp;
        // float fuerza;
        // int salud;

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "Tipo: ";
        getline(cin, p.tipo);

        cout << "Fuerza: ";
        cin >> p.fuerza;

        cout << "Salud: ";
        cin >> p.salud;


        return in;
    }
};

#endif