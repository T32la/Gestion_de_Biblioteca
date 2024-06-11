// creado por Andres Brito
/************************************************
*				Librerias						*
*************************************************/
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "libros.h"


// colores en terminal
const string ANSI_VERDE = "\033[32m";
const string ANSI_ROJO = "\033[31m";
const string ANSI_RESET = "\033[0m";

using namespace std;
// Fin de Andres Brito

// Variables Globales
string h = "\t";

/************************************************
*				Funciones						*
*************************************************/
// Creado por Evelyn 
void menu(vector<Libro>& libros, set<string>&titulos,  set<string>&generos) {
    int op;
    do {
        cout << endl ;
        cout << h<< ANSI_VERDE  << "====================" << endl;
        cout << h << "== Biblioteca UVG =="   << endl;
        cout << h << "====================" << endl;
        cout << h << " ====== Menu ====== " << endl;
        cout << h << "====================" << ANSI_RESET << endl << endl;
        cout << h << "1. Ingresar libros" << endl;
        cout << h << "2. Buscar y Mostrar informacion" << endl;
        cout << h << "3. Actualizar informacion" << endl;
        cout << h << "4. Listar Libros" << endl;
        cout << h << "5. Descripcion" << endl;
        cout << h << "6. Salir" << endl << endl;
        

        cout << h << "Elige una opcion: ";
        cin >> op;
        cin.ignore(); // Limpiar el buffer de entrada
        system("cls");

        switch (op) {
            case 1:
                ingresarLibros(libros, titulos, generos);
                break;
            case 2:
            	cout << endl;
                buscarLibro(libros, titulos, generos);
                break;
            case 3:
                actualizarInformacion(libros);
                break;
            case 4:
                cout << endl << h << "Listar Libros: " << endl << endl;
                mostrar(libros);
                break;
            case 5:
            	cout << endl;
                descripcion();
                break;
            case 6:
            	cout << endl;
                cout << h << "Saliendo..." << endl;
                break;
            default:
            	cout << endl;
                cout << h << "Opcion incorrecta" << endl;
                pausa();
                break;
        }
    } while (op != 6);
}
// Fin tarea de Evelyn


// Tarea de Andres
void mostrar(const vector<Libro>& libros) {
    for (int i = 0 ; i < libros.size(); i++) {
     cout << h << "Libro: " << i << "." << endl
		<< h << "Titulo: " << h << libros[i].titulo << endl 
		<< h << "Autor: " << h << h << libros[i].autor << endl 
		<< h<< "Genero: " << h << libros[i].genero << endl 
		<< h << "Anio: " << h << h << libros[i].anio_publicacion << endl;
	
		if (libros[i].estatus == "Disponible" || libros[i].estatus == "disponible") {
			cout << h << "Estatus: " << h << ANSI_VERDE << libros[i].estatus << ANSI_RESET << endl << endl << endl;
		} else {
			cout << h << "Estatus: " << h << ANSI_ROJO << libros[i].estatus <<ANSI_RESET << endl << endl << endl;
		}
    }
	pausa();
}
// Fin Tarea de Andres

// Tarea de Evelyn
void ingresarLibros(vector<Libro>& libros, set<string>&titulos, set<string>&generos) {
    cout << h << "Ingresar libros" << endl;
    Libro libro;
    cout << h << "Ingresa el Titulo del Libro: ";
    getline(cin, libro.titulo);
    cout << h << "Ingresa el Nombre del Autor: ";
    getline(cin, libro.autor);
    cout << h << "Ingresa el Genero del Libro: ";
    getline(cin, libro.genero);
    cout << h << "Ingresa el Anio de Publicacion del Libro: ";
    cin >> libro.anio_publicacion;
    cin.ignore();
    libro.estatus = "Disponible";
    libros.push_back(libro);
       // set
    titulos.insert(libro.titulo);
    generos.insert(libro.genero);
    system("cls");
    cout << endl << endl;  
	cout<< h << h << "Los datos del libro han sido registrados correctamente en el sistema..." << endl << endl;
	pausa();
}
// Fin Tarea de Evelyn


// Tarea de Juan
void buscarLibro(const vector<Libro>&libros, set<string>&titulos,  set<string>&generos) {
    string buscar, op_buscar;
    while (true) {
        cout << h << "¿Buscar Libro por TITULO o GENERO?"
			<< endl << endl << h << "Elige una opcion" << endl
            << h << "Escribir titulo, si desea Buscar por titulo:" << endl
            << h << "Escribir genero, si desea Buscar por genero " << endl;
            cout << h << "Escribe la opcion: ";
        cin >> op_buscar;
        cin.ignore();
        pausa();
        if (op_buscar == "titulo") {  
           cout << endl << h << "Libros disponibles";
           // Set Vector   
            vector<string> titulosVector(titulos.begin(), titulos.end());
            for (int i = 0 ; i < titulosVector.size(); i++) {
                cout << endl << h << " - " << ": " << titulosVector[i]; 
           }
           cout << endl << endl;  
            cout << h << "Ingrese el titulo del libro: ";
            getline(cin, buscar);      
            pausa();      
            for (int i = 0; i<libros.size(); i++) {
                if (libros[i].titulo == buscar) {
                	  cout << endl 
					  << h << "Titulo: " << h << libros[i].titulo << endl
					  << h << "Autor: " << h << h<< libros[i].autor << endl
					  << h << "Genero: "<< h << libros[i].genero << endl
					  << h << "Anio: " << h << h << libros[i].anio_publicacion << endl;	
						if (libros[i].estatus == "Disponible" || libros[i].estatus == "disponible") {
							cout << h << "Estatus: " << h << ANSI_VERDE << libros[i].estatus << ANSI_RESET << endl;
						} else {
							cout << h << "Estatus: " << h << ANSI_ROJO << libros[i].estatus <<ANSI_RESET << endl;
						}
                   }
            }     
        } 
         else if (op_buscar == "genero") {
            // Set Vector
            cout << endl << h << "Generos de Libros disponibles: ";
            vector<string> generosVector(generos.begin(), generos.end());
            for (int i = 0 ; i < generosVector.size(); i++) {
                cout << endl << h << " - " << ": " << generosVector[i]; 
            }
           cout << endl << endl;   
           cout << endl << endl;
            cout << h << "Ingrese el genero del libro: ";
            getline(cin, buscar);
            pausa();
            for (int i =0; i<libros.size(); i++) {
                if (libros[i].genero == buscar) {
                    	cout << endl 
					  << h << "Titulo: " << h << libros[i].titulo << endl
					  << h << "Autor: " << h << h << libros[i].autor << endl
					  << h << "Genero: "<< h << libros[i].genero << endl
					  << h << "Anio: " << h << h << libros[i].anio_publicacion << endl;
					  if (libros[i].estatus == "Disponible" || libros[i].estatus == "disponible") {
							cout << h << "Estatus: " << h << ANSI_VERDE << libros[i].estatus << ANSI_RESET << endl;
						} else {
							cout << h << "Estatus: " << h << ANSI_ROJO << libros[i].estatus <<ANSI_RESET << endl;
						}  
				    } 
		        }       
        } else {
            cout << h << "Opcion no valida." << endl;
        }
        cout << endl << h << "¿Deseas realizar otra busqueda? (si/no): ";
        string respuesta;
        cin >> respuesta;
         
        cin.ignore();
        if (respuesta != "si") {
            break;
        }
    }
	pausa();
}
// Fin Tarea de Juan


// Tarea de Kevin
void actualizarInformacion(vector<Libro>& libros) {
    string buscar, op_buscar, nuevo_titulo, nuevo_estatus;
    while (true) {
        cout << endl
		<< h << "Actualizar libro por TITULO o ESTATUS?";
        cout << endl << endl << h << "Elige una opcion" << endl
            << h << "Escribir titulo, si desea Buscar por titulo:" << endl
            << h << "Escribir estatus, si desea Buscar por estatus " << endl;
            cout << h << "Escribe la opcion: ";
    
        cin >> op_buscar;
        cin.ignore();
		pausa();
        if (op_buscar == "titulo") {
            
            cout << endl << h << "Libros disponibles"<<endl;
            for (int i = 0; i < libros.size(); i++) {
                cout << h << " - " << libros[i].titulo << endl;
            }
           cout << endl << endl;
            
            cout << h << "Introduce el titulo del libro que deseas actualizar: ";
            getline(cin, buscar);
            bool encontrado = false;
            pausa();
            for (auto& libro : libros) {
                if (libro.titulo == buscar) {
                    cout << endl << h << "Libro encontrado: " << endl;
                    cout << endl 
					<< h << "Titulo: " << h << libro.titulo << endl 
					<< h << "Autor: " << h << h << libro.autor << endl 
					<< h<< "Genero: " << h << libro.genero << endl 
					<< h << "Anio: " << h << h << libro.anio_publicacion << endl;
					if (libro.estatus == "Disponible" || libro.estatus == "disponible") {
						cout << h << "Estatus: " << h << ANSI_VERDE << libro.estatus << ANSI_RESET << endl;
					} else {
						cout << h << "Estatus: " << h << ANSI_ROJO << libro.estatus <<ANSI_RESET << endl;
					}
                    cout << endl << h << "Introduce el nuevo titulo: ";
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
            cout << endl << endl << h << "Libros disponibles"<<endl;
            for (int i = 0; i < libros.size(); i++) {
                cout << h << " - " << libros[i].titulo << endl;
            }
           cout << endl << endl;
            cout << h << "Introduce el Titulo del libro" << endl << h << " para Actualizar el estatus: ";
            getline(cin, buscar);
            bool encontrado = false;
            pausa();
            for (auto& libro : libros) {
                if (libro.titulo == buscar) {
                    cout << h << "Libro encontrado: " << endl;
                    cout << endl 
					<< h << "Titulo: " << h << libro.titulo << endl 
					<< h << "Autor: " << h << h << libro.autor << endl 
					<< h << "Genero: " << h << libro.genero << endl 
					<< h << "Anio: " << h << h << libro.anio_publicacion << endl;
					if (libro.estatus == "Disponible" || libro.estatus == "disponible") {
						cout << h << "Estatus: " << h << ANSI_VERDE << libro.estatus << ANSI_RESET << endl;
					} else {
						cout << h << "Estatus: " << h << ANSI_ROJO << libro.estatus <<ANSI_RESET << endl;
					}					
                    cout << endl << h << "Introduce el nuevo estatus" << endl <<
                    h << "Disponible a No Disponible" << " o "  << endl << h << "No Disponible a Disponible: " << endl;
                    cout << endl << h << "Nuevo estatus: "; getline(cin, nuevo_estatus);
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
        cin >> respuesta;
        cin.ignore();
        if (respuesta != "si") {
            break;
        }
    }
    pausa();
}
// Fin Tarea de Kevin

// Tarea de Victoriano
void descripcion() {
    cout << h << "Descripcion: " << endl;
    cout << h << "\tVersion V0.01\n\t\tSistema de Gestion de libros de la Biblioteca de la UVG.\n\n\tOpciones disponibles:\n\t\t1. Agregar libros.\n\t\t2. Buscar y Listar libros.\n\t\t3. Buscar libro por titulo, genero y actualizar los campos del Libro.\n\t\t4. Listar libros.\n\t\t5. Descripcion del programa.\n\t\t6. Salir del programa.\n\n\tDesarrolladores:\n\t\t- Evelin Carolina\n\t\t- Andres Daniel\n\t\t- Juan Ralios\n\t\t- Kevin Antonio\n\t\t- Victoriano Juarez.\n\n\tProyecto Final del Curso de Algoritmos y Programacion.\n\t\t Lic. Marvin\n\n\t\tUniversidad del Valle de Guatemala\n\t\tAltiplano Solola 2024." << endl << endl;
    pausa();
}
// Fin Tarea de Victoriano

void pausa() {
	system("pause");
	cout << endl <<
	h << h << "Presiona Enter para continuar...";
	system("cls");
}

/************************************************
*				Funcion Principal				*
*************************************************/

// Tarea de Victoriano
int main() {
    vector<Libro> libros;
    set<string> titulos;
    set<string> generos;
    
    libros.push_back({"Eloquent Javascript", "Marijin Haverbeke", "Programacion" ,2024, "Disponible"});
	libros.push_back({"Fundamentos de Programacion usando PSeInt", "Ivan Garcia", "Logica", 2014, "Disponible"});
	libros.push_back({"Viaje al Centro de la Tierra", "Julio Verne", "Aventura", 1864, "No Disponible"});
	libros.push_back({"Java", "Kathy Sierra", "Programacion", 2005, "No Disponible"});
 
    titulos.insert({"Eloquent Javascript", "Fundamentos de Programacion usando PSeInt", "Viaje al Centro de la Tierra", "Java"});
    generos.insert({"Programacion", "Logica", "Aventura"});
    menu(libros, titulos, generos);

    
    return 0;
}
// Fin Tarea de Victoriano
