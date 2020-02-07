#include<iostream>

int main(){
    char salir;
    int dia;
    int mes;
    int anno;
    
    std::cout<<"Bienvenido al programa para obtener una fecha.\n";
    
    std::cout<<"Introduzca su numero de dia: ";
    std::cin>>dia;
    
    while (dia<=0){
          std::cout<<"Su numero de dia no es valido. Es negativo o 0.\n";
          std::cout<<"Introduzca aqui su numero de dia nuevamente: ";
          std::cin>>dia;
    }
    
    while (dia>31){
          std::cout<<"Su numero de dia no es valido. Es superior a 31.\n";
          std::cout<<"Introduzca de nuevo su numero de dia aqui: ";
          std::cin>>dia;      
    }
    
    std::cout<<"Introduzca su numero de mes: ";
    std::cin>>mes;
    
    while (mes<=0){
          std::cout<<"Su numero de mes no es valido. Es negativo o 0.\n";
          std::cout<<"Introduzca aqui su numero de mes nuevamente: ";
          std::cin>>mes;     
    }
    
    while (mes>12){
          std::cout<<"Su numero de mes no es valido. Es superior a 12.\n";
          std::cout<<"Introduzca de nuevo su numero de mes aqui: ";
          std::cin>>mes;
    }
    
    std::cout<<"Introduzca su numero de anno: ";
    std::cin>>anno;
    
    while (anno<0){
          std::cout<<"Su numero de anno no es valido. Es negativo.\n";
          std::cout<<"Introduzca aqui su numero de anno nuevamente: ";
          std::cin>>anno;
          }
    
    std::cout<<"Su fecha es: ";
    std::cout<<dia;
    std::cout<<" de ";
    std::cout<<mes;
    std::cout<<" de ";
    std::cout<<anno;
    
    std::cin>>salir;
}
