#include <iostream>
#include <string>
#include <vector>
#include "colors.h"


using namespace std;
string h = "t\";
struct Info
{
	string titulo;
	string autor;
	string genero;
	int anio_publicacion;
	string estatus;
};

void mostrar(vector<Info> libros)
{

	for (int i = 0; i < libros.size(); i++)
	{
		cout << h << i << ". " << libros[i].titulo << h
				 << libros[i].autor << h << libros[i].genero << h << libros[i].anio_publicacion << h << libros[i].estatus << endl;
	}
}

int menu(int options, int numeros1) {
	//vector<info>libros;
	
	do{
	
		cout << endl;
		cout << endl;
		cout <<  << "==============" << endl;
		cout << h << "Biblioteca UVG" << endl;
		cout << h << "==============" << endl;
		cout << h << "== Menu ==" << endl;
		cout << h << "================" << endl;
		cout << h << "1. Ingresar libros" << endl;
		cout << h << "2. Buscar y Mostrar informacion" << endl;
		cout << h << "3. Actualizar informacion" << endl;
		cout << h << "4. Listar Libros" << endl;
		cout << h << "5. Descripcion" << endl;
		cout << h << "6. Salir" << endl;

		cout << h << "Elige una opcion: ";
		cout << h;
		cin >> option;
		system("cls");

		switch (option)
		{
		case 1:
			cout << h << "Ingresar libros" << endl;
			cout << h << "Cuantos libros deseas ingresar: ";
			cin >> num1;
			cout << h << "=====================" << endl;
			for (int i = 1; i <= num1; i++)
			{
				Info libro;
				cout << h << "Ingresa el Titulo del Libro: ";
				cin.get();
				getline(cin, libro.titulo);
				cout << h << "Ingresa el Nombre del Autor: ";
				getline(cin, libro.autor);
				cout << h << "Ingresa el Genero del Libro: ";

				getline(cin, libro.genero);
				cout << h << "Ingresa el Anio de Publicacion del Libro: ";
				cin >> libro.anio_publicacion;
				cout << h << "Ingresa el estatus del Libro: ";
				cin.get();
				getline(cin, libro.estatus);
				libros.push_back(libro);
			}
			pause();
			cout << "=====================" << endl;
			mostrar(libros);
			break;
		case 2:
			cout << "Buscar libro: " << endl;
			pause();
			break;
		case 3:
			cout << "Actualizar informacion: " << endl;
			pause();
			break;
		case 4:
			cout << "======================" << endl;
			cout << h << "Libros Disponibles: ";
			mostrar(libros);
			pause();
			break;
		case 5:
			cout << "Descripcion: " << endl;
			pause();
			break;
		case 6:
			salir(validar);
			break;
		default:
			cout << "Opcion incorrecta" << endl;
			break;
		}

	} while (option != 6);
	return 0;
}



	// adhakjdskfaldsfadfa

int main()
{
	string titulo;
	string autor;
	string genero;
	int anio_publicacion;
	string estatus;

	int options;
  cout << endl
       << GREEN << "Sistema de Gestion de Libreria UVG" << RESET << endl;
  cout << endl
       << "Bienvenidos a la biblioteca UVG," << endl
       << "en donde encontraras los mejores libros." << endl
       << "Actualizados 2024" << endl;
       
       system("pause");
 	system("cls");
	menu ();
  cout << endl;

	
		
  return 0;
}
