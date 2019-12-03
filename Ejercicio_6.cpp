#include <iostream>

int main (){
    char salir;
    int n1;
    int n2;
    char operacion;
    
    std::cout<<"Bienvenid@ al programa para calcular operaciones.\n";
    std::cout<<"Recuerde que tiene que introducir solamente numeros enteros.\n";
    
    std::cout<<"Introduzca aqui su primer numero: ";
    std::cin>>n1;
    
    std::cout<<"Introduzca aqui su segundo numero: ";
    std::cin>>n2;
    
    std::cout<<"Para realizar una suma, introduzca 's', 'r' para una resta, ";
    std::cout<<"'m' para una multiplicacion y 'd' para una division";
    std::cout<<"Introduzca aqui el tipo de operacion deseada: ";
    std::cin>>operacion;
    
    while ((operacion=='s')||(operacion=='S')){
          std::cout<<"Su resultado es: ";
          std::cout<<n1;
          std::cout<<" + ";
          std::cout<<n2;
          std::cout<<" = ";
          std::cout<<n1+n2;
    }
    
    while ((operacion=='r')||(operacion=='R')){
          std::cout<<"Su resultado es: ";
          std::cout<<n1;
          std::cout<<" - ";
          std::cout<<n2;
          std::cout<<" = ";
          std::cout<<n1-n2;      
    }
    
    while ((operacion=='m')||(operacion=='M')){
          std::cout<<"Su resultado es: ";
          std::cout<<n1;
          std::cout<<" X ";
          std::cout<<n2;
          std::cout<<" = ";
          std::cout<<n1*n2;
    }
    
    while ((operacion=='d')||(operacion=='D')){
          while (n2==0){
                std::cout<<"Ha ocurrido un error.\n Su segundo numero es";
                std::cout<<" igual a 0";
                std::cout<<"Introduzca de nuevo su segundo numero aqui: ";
                std::cin>>n2;
                }
          std::cout<<"Su resultado es: ";
          std::cout<<n1;
          std::cout<<" / ";
          std::cout<<n2;
          std::cout<<" = ";
          std::cout<<n1/n2;
    }
    
    std::cin>>salir;   
}
