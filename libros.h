// tare para Juan crear estructura de libreria -- Inicio
#ifndef LIBROS_H
#define LIBROS_H

#include <string>
#include <vector>

using namespace std;

// Tarea kevin -- definir estructura y declarar funciones
struct Libro {
    string titulo;
    string autor;
    string genero;
    int anio_publicacion;
    string estatus;
    bool disponible;
};

void mostrar(const vector<Libro>& libros);
void ingresarLibros(vector<Libro>& libros, set<string>&generos, set<string>&titulos);
void buscarLibro(const vector<Libro>& libros, set<string>&generos, set<string>&titulos);
void actualizarInformacion(vector<Libro>& libros);
void descripcion();
void pausa();
void menu(vector<Libro>& libros, set<string>&generos, set<string>&titulos);


// Fin tarea Kevin

#endif // LIBROS_H

// estructura finalizada