#include <iostream>
#include <string>
#include <vector>
#include "libros.h"

using namespace std;

// Variables Globales
string h = "\t";
string v = "\v";


// Funciones
void mostrar(const vector<Libro>& libros) {
    for (int i = 0; i < libros.size(); i++) {
        cout << endl << h << i << ". " << libros[i].titulo << h
             << libros[i].autor << h << libros[i].genero << h << libros[i].anio_publicacion << h << libros[i].estatus << endl;
    }
}

int main() {
    vector<Libro> libros;
    libros.push_back({"Eloquent Javascript", "Marijin Haverbeke", "Programacion", 2024, "Disponible"});
	libros.push_back({"Fundamentos de Programacion usando PSeInt", "Ivan Garcia", "Logica", 2014, "Disponible"});
    menu(libros);
    return 0;
}
