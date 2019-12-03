#include <iostream>

int main(){
  char salir;
  float dol;
  std::cout<<"Bienvenido al convertir de dolares a euros.\n";
  std::cout<<"Recuerde que debe introducir cifras decimales.\n";
  std::cout<<"Introduzca el importe a convertir aqui: ";
  std::cin>>dol;
  while (dol<=0){
        std::cout<<"Ha ocurrido un error.\n";
        std::cout<<"El importe introducido es 0 o un numero negativo.\n";
        std::cout<<"Introduzca su importe de nuevo aqui: ";
        std::cin>>dol;
  }
  std::cout<<"Su importe es igual a ";
  std::cout<<(dol*0.91);
  std::cout<<" euros.";
  std::cin>>salir;
}
