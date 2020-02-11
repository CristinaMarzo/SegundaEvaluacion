#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*GUARDAR INFORMACION COMPLEJA: sobre un mismo dato guardo diferentes tipos de variables (tipos)
listas: arrays (no son suficientes)
ESTRUCTURAS:
struct Amigo{
       int n.amigo;
       float dinero;
}; --> las estrcuturas necesitan un punto y coma
array de diferentes estilos
los guarda seguidos
el orden da igual
puedes hacer los que quieras*/

int main(){
  struct Amigo{
    int n_amigo;
    float dinero;
  };
  char salir;
  int cont;
  Amigo misAmigos[3]; //Guardo memoria para un dato de tipo amigo (Declaras variable de tipo Amigo)
  for (cont=0; cont<3; cont++){
    std::cout<<"Dime tu numero ";
    std::cin>>misAmigos[cont].n_amigo; //Principio de programacion orientada a objetos
    std::cout<<"Dime cuanto dinero tienes: ";
    std::cin>>misAmigos[cont].dinero;
  }

  //Recupero los datos de mi Amigo pepito
  
  for (cont=0; cont<3; cont++){
    std::cout<<"\nYo tengo un amigo que se llama pepito";
    std::cout<<"\nPepito es mi amigo numero: ";
    std::cout<<misAmigos[cont].n_amigo;
    std::cout<<"\ny tiene ";
    std::cout<<misAmigos[cont].dinero;
    std::cout<<" euros";
  }

  std::cin>>salir;
}
