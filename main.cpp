#include <iostream>
#include <string>
#include <vector>
#include "colors.h"

using namespace std;

int main()
{

  cout << endl
       << GREEN << "Sistema de Gestion de Libreria UVG" << RESET << endl;
  cout << endl
       << "Bienvenidos a la biblioteca UVG," << endl
       << "en donde encontraras los mejores libros." << endl
       << "Actualizados 2024" << endl;

  cout << endl
       << "Que deseas realizar en el Sistema de Biblioteca: " << endl
       << endl;
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
       
  system("pause");


  return 0;
}