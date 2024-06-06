// tare para Juan -- Inicio
#ifndef LIBROS_H
#define LIBROS_H

#include <string>
#include <vector>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    string genero;
    int anio_publicacion;
    string estatus;
    bool disponible;
};

void mostrar(const vector<Libro>& libros);
void ingresarLibros(vector<Libro>& libros);
void buscarLibro(const vector<Libro>& libros);
void actualizarInformacion(vector<Libro>& libros);
void descripcion();
void pausa();
void menu(vector<Libro>& libros);

#endif // LIBROS_H
