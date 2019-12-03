#include <iostream>
//libreria para introducir variables booleanas
#include <stdbool.h>

//Declarar variable booleana: bool ...

int main(){
    char salir;
    int dia;
    int contador;
    std::cout<<"Bienvenido al programa para obtener un ";
    std::cout<<"dia de la semana a partir de un numero.\n";
    std::cout<<"Introduzca aqui su numero entero: ";
    std::cin>>dia;
    
    while(dia<=0){
                  std::cout<<"Su numero es negativo o cero.\n";
                  std::cout<<"Introduzca aqui un numero entero valido: ";
                  std::cin>>dia;
    }
    
    while(dia>7){
            std::cout<<"Su numero es mayor que siete.\n";
            std::cout<<"Introduzca aqui un numero entero valido: ";
            std::cin>>dia;        
    }
    
    std::cout<<"Su dia de la semana es: ";
    
    if (dia==1){
       std::cout<<"lunes.";
    }
    
    if (dia==2){
                std::cout<<"martes.";
    }
    
    if (dia==3){
                std::cout<<"miercoles.";
    }
    
    if (dia==4){
                std::cout<<"jueves.";
    }
    
    if (dia==5){
                std::cout<<"viernes.";
    }
    
    if (dia==6){
                std::cout<<"sabado.";
    }
    
    if (dia==7){
                std::cout<<"domingo.";
    }
    
    std::cin>>salir;
}
