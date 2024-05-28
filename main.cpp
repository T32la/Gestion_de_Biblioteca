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
    for (int i = 0 ; i < libros.size(); i++) {
        cout << endl << h << i << ". " << libros[i].titulo << h
             << libros[i].autor << h << libros[i].genero << h << libros[i].anio_publicacion << h << libros[i].estatus << endl;
    }
}

void ingresarLibros(vector<Libro>& libros) {
    int num;
    cout << h << "Ingresar libros" << endl;
    cout << h << "¿Cuantos libros deseas ingresar?: ";
    cin >> num;
    cin.ignore();
    for (int i = 1; i <= num; i++) {
        Libro libro;
        cout << h << "Ingresa el Titulo del Libro num:  "<<i<< ":  ";
        getline(cin, libro.titulo);
        cout << h << "Ingresa el Nombre del Autor: ";
        getline(cin, libro.autor);
        cout << h << "Ingresa el Genero del Libro: ";
        getline(cin, libro.genero);
        cout << h << "Ingresa el Anio de Publicacion del Libro: ";
        cin >> libro.anio_publicacion;
        cin.ignore();
        cout << h << "Ingresa el estatus del Libro: ";
        getline(cin, libro.estatus);
        libros.push_back(libro);
        
    	 system("cls");
         
    }
    
		cout<<h<<h<<h<<"Los datos del libro hab  sido registrados correctamente en el sisteema..."<<endl;
   		system("pause");
   		system("cls");
      
}

void buscarLibro(const vector<Libro>&libros) {
    string buscar, op_buscar;
    cout << "Buscar libro: " << endl;
    while (true) {
        cout << endl << h << "¿Buscar por titulo o por genero? (titulo | genero): " << endl;
        cout << h; cin >> op_buscar;
        cin.ignore();
        system("cls");
        if (op_buscar == "titulo") {
            cout << h << "Ingrese el titulo del libro: ";
            cout << h; getline(cin, buscar);
            
            for (int i = 0; i<libros.size(); i++) {
                if (libros[i].titulo == buscar) {			   
				   
	        	cout << h << libros[i].titulo << h << libros[i].autor << h << libros[i].genero << h << libros[i].anio_publicacion << h << libros[i].estatus << endl;  
			   
			    }
			    
            }
            
        } else if (op_buscar == "genero") {
            cout << h << "Ingrese el genero del libro: ";
            cout << h; getline(cin, buscar);
            
            for (int i =0; i<libros.size(); i++) {
                if (libros[i].genero == buscar) {
                    cout << h << libros[i].titulo << h << libros[i].autor << h << libros[i].genero << h << libros[i].anio_publicacion << h << libros[i].estatus << endl;
                
				}
           
		    }
        } else {
            cout << h << "Opcion no valida." << endl;
        }
        cout << endl << "¿Deseas realizar otra busqueda? (si/no): ";
        string respuesta;
        cout << h; cin >> respuesta;
        system("pause");
    system("cls");
        
        cin.ignore();
        if (respuesta != "si") {
            break;
        }
    }
    system("pause");
    system("cls");
}


void actualizarInformacion(vector<Libro>& libros) {
    string buscar, op_buscar, nuevo_titulo, nuevo_estatus;
    cout << h << "Actualizar informacion: " << endl;
    while (true) {
        cout << h << "¿Actualizar informacion del libro por titulo o estatus? (Escribe: titulo o estatus): ";
        cin >> op_buscar;
        cin.ignore();

        if (op_buscar == "titulo") {
            cout << h << "Introduce el titulo del libro que deseas actualizar: ";
            getline(cin, buscar);
            bool encontrado = false;
            for (auto& libro : libros) {
                if (libro.titulo == buscar) {
                    cout << h << "Libro encontrado: " << endl;
                    cout << h << "Titulo: " << libro.titulo << h << "Autor: " << libro.autor << h<< "Genero: " << libro.genero << h << "Año: " << libro.anio_publicacion  << h << "Estatus: " << libro.estatus << endl;
                    cout << h << "Introduce el nuevo titulo: ";
					getline(cin, nuevo_titulo);
                    libro.titulo = nuevo_titulo;
                    encontrado = true;
                    break;
                }
            }
            
            if (!encontrado) {
                cout << h << "Libro no encontrado." << endl;
            }
        } else if (op_buscar == "estatus") {
            cout << h << "Introduce el genero del libro que deseas buscar: ";
            getline(cin, buscar);
            bool encontrado = false;
            for (auto& libro : libros) {
                if (libro.titulo == buscar) {
                    cout << h << "Libro encontrado: " << endl;
                    cout << h << "Titulo: " << libro.titulo << h<<", Autor: " << libro.autor << h << ", Genero: " << libro.genero 
					<< h << ", Año: " << libro.anio_publicacion << h << ", Estatus: " << libro.estatus << endl;
                    cout << h << "Introduce el nuevo estatus: ";
                    getline(cin, nuevo_estatus);
                    libro.estatus = nuevo_estatus;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) {
                cout << h << "Libro no encontrado." << endl;
            }
        } else {
            cout << h << "Opcion no valida." << endl;
        }
        
        cout << "¿Deseas actualizar otro libro? (si/no): ";
        string respuesta;
        cout << h; cin >> respuesta;
        cin.ignore();
        if (respuesta != "si") {
            break;
        }
    }
    pausa();
}

void descripcion() {
    cout << h << "Descripcion: " << endl;
    cout << h << "\tVersion V0.01\n\n\tSistema de Gestion de libros de la Biblioteca de la UVG.\n\n\tOpciones disponibles:\n\n\t\t1. Agregar libros.\n\n\t\t2. Buscar y Listar libros.\n\n\t\t3. Buscar libro por titulo, genero y actualizar los campos del Libro.\n\n\t\t4. Listar libros.\n\n\t\t5. Descripcion del programa.\n\n\t\t6. Salir del programa.\n\n\tDesarrolladores:\n\n\t\t- Evelin Carolina\n\n\t\t- Daniel Andres\n\n\t\t- Juan Ralios\n\n\t\t- Kevin Antonio\n\n\t\t- Victoriano Juarez.\n\n\n\n\tProyecto Final del Curso de Algoritmos y Programacion.\n\n\t\t Lic. Marvin\n\n\n\t\tUniversidad del Valle de Guatemala\n\n\n\t\tAltiplano Solola 2024." << endl << endl;
    pausa();
}

void pausa() {
    cout << h << "Presiona Enter para continuar...";
    cin.ignore();
    cin.get();
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
