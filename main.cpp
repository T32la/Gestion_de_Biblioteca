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

void menu(vector<Libro>& libros) {
    int op;
    do {
        cout << endl;
        cout << h << "====================" << endl;
        cout << h << "== Biblioteca UVG ==" << endl;
        cout << h << "====================" << endl;
        cout << h << " ====== Menu ====== " << endl;
        cout << h << "====================" << endl;
        cout << h << "1. Ingresar libros" << endl;
        cout << h << "2. Buscar y Mostrar informacion" << endl;
        cout << h << "3. Actualizar informacion" << endl;
        cout << h << "4. Listar Libros" << endl;
        cout << h << "5. Descripcion" << endl;
        cout << h << "6. Salir" << endl << endl;

        cout << h << "Elige una opcion: ";
        cout << h; cin >> op;
        cin.ignore(); // Limpiar el buffer de entrada
        system("cls");

        switch (op) {
            case 1:
                ingresarLibros(libros);
                break;
            case 2:
                buscarLibro(libros);
                break;
            case 3:
                actualizarInformacion(libros);
                break;
            case 4:
                cout << h << "Listar Libros: " << endl;
                mostrar(libros);
                pausa();
                break;
            case 5:
                descripcion();
                break;
            case 6:
                cout << h << "Saliendo..." << endl;
                break;
            default:
                cout << h << "Opcion incorrecta" << endl;
                pausa();
                break;
        }
    } while (op != 6);
}

int main() {
    vector<Libro> libros;
    libros.push_back({"Eloquent Javascript", "Marijin Haverbeke", "Programacion", 2024, "Disponible"});
	libros.push_back({"Fundamentos de Programacion usando PSeInt", "Ivan Garcia", "Logica", 2014, "Disponible"});
    menu(libros);
    return 0;
}
