#include <iostream>
#include <string>
#include <vector>
#include "colors.h"

using namespace std;

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

  cout << endl;

	 
	  
	   cout<< "Que deseas realizar en el Sistema de Biblioteca: " << endl;
       cout<< endl;
       cout<<"=========="<<endl;
       cout<<"Biblioteca"<<endl;
       cout<<"=========="<<endl;
       cout<<"== Menu =="<<endl;
       cout<<"Elige una opcion"<<endl;
       cout<<"================"<<endl;
       cout<<"1. Ingresar libros"<<endl;
       cout<<"2. Buscar y Mostrar informacion"<<endl;
       cout<<"3. Actualizar informacion"<<endl;
       cout<<"4. Descripcion"<<endl;
       cout<<"5. Salir"<<endl;
       
       
	 
    
  	cout<<"ingrese la opcion"<<endl;
    cin>>options;
  
  	
	switch(options){
		
		case 1:
			cout<<"Ingresar libros: "<<endl;

			
			cout<<"Ingresar el titulo del libro: "<<endl;
			cin>>titulo;
			cout<<"Ingrese el nombre del autor: "<<endl;
			cin>>autor;
			cout<<"Ingrese el genero del libro: "<<endl;
			cin>>genero;
			cout<<"Ingrese el año de la publicacion: "<<endl;
			cin>>anio_publicacion;
			cout<<"Ingrese el estatus: "<<endl;
			cin>>estatus;
			cout << titulo << autor << genero << anio_publicacion << estatus <<endl;
			break;
			
		case 2:
			cout<<"Buscar libro: "<<endl;
			break;
		case 3:
			cout<<"Actualizar informacion: "<<endl;
			break;
		case 4:
			cout<<"Descripcion: "<<endl;
			break;
		case 5:
			cout<<" cerrar sesion: "<<endl;
			break;	
	
		
		}
		
	
		
  return 0;
}