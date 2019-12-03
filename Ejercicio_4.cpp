#include <iostream>
//libreria para introducir variables booleanas
#include <stdbool.h>

int main(){
    char salir;
    int mes;
    int contador;
    std::cout<<"Bienvenido al programa para obtener un ";
    std::cout<<"mes a partir de un numero.\n";
    std::cout<<"Introduzca aqui su numero entero: ";
    std::cin>>mes;
    
    while(mes<=0){
                  std::cout<<"Su numero es negativo o cero.\n";
                  std::cout<<"Introduzca aqui un numero entero valido: ";
                  std::cin>>mes;
    }
    
    while(mes>12){
            std::cout<<"Su numero es mayor que doce.\n";
            std::cout<<"Introduzca aqui un numero entero valido: ";
            std::cin>>mes;        
    }
    
    std::cout<<"Su mes es: ";
    
    if (mes==1){
       std::cout<<"enero.";
    }
    
    if (mes==2){
                std::cout<<"febrero.";
    }
    
    if (mes==3){
                std::cout<<"marzo.";
    }
    
    if (mes==4){
                std::cout<<"abril.";
    }
    
    if (mes==5){
                std::cout<<"mayo.";
    }
    
    if (mes==6){
                std::cout<<"junio.";
    }
    
    if (mes==7){
                std::cout<<"julio.";
    }
    
    if (mes==8){
       std::cout<<"agosto";            
    }
    
    if(mes==9){
               std::cout<<"septiembre";           
    }
    
    if (mes==10){
       std::cout<<"octubre";             
    }
    
    if (mes==11){
                std::cout<<"noviembre";
    }
    
    if (mes==12){
                 std::cout<<"diciembre";
    }
    
    std::cin>>salir;
}
