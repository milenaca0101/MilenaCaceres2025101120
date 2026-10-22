#include <iostream>
#include <string>
using namespace std;

// Crear la estructura Personaje
struct Personaje {
    string nombre;
    int fuerza;
};

int main() {
    // Crear dos objetos
    Personaje p1;
    Personaje p2;

    // Asignar valores al primer personaje
    p1.nombre = "Yajirobe";
    p1.fuerza = 950;

    // Asignar valores al segundo personaje
    p2.nombre = "Majin buu";
    p2.fuerza = 800;

    // Mostrar los datos de los personajes
    cout << "=== BATALLA DE PERSONAJES ===" << endl;

    cout << "Personaje 1: " << p1.nombre << endl;
    cout << "Fuerza: " << p1.fuerza << endl;

    cout << "\nPersonaje 2: " << p2.nombre << endl;
    cout << "Fuerza: " << p2.fuerza << endl;

    // Comparar los puntos de fuerza
    cout << "\n=== RESULTADO ===" << endl;

    if (p1.fuerza > p2.fuerza) {
        cout << p1.nombre << " es el mas fuerte." << endl;
    }
    else if (p2.fuerza > p1.fuerza) {
        cout << p2.nombre << " es el mas fuerte." << endl;
    }
    else {
        cout << "Ambos personajes tienen la misma fuerza." << endl;
    }

    return 0;
}
