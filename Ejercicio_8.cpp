#include <iostream>

int main(){
    char salir;
    float importe;
    char iva;
    
    std::cout<<"Bienvenid@ a la aplicacion para calcular su impuesto IVA.\n";
    std::cout<<"El general es del 16%, el reducido es del 7% y el ";
    std::cout<<"superreducido es del 4%.\n";
    std::cout<<"Recuerde que el importe base debe ser un numero decimal.";
    
    std::cout<<"Introduzca el importe base: ";
    std::cin>>importe;
    
    std::cout<<"Para el IVA general 'g', para el reducido 'r' y para el ";
    std::cout<<"superreducido 's'";
    std::cout<<"Introduzca su tipo de IVA aqui: ";
    std::cin>>iva;
    
    while (iva=='g')||(iva=='G'){
          std::cout<<"Su precio total es: ";
          std::cout<<importe*0.16;
    }
          
    while (iva=='r')||(iva=='R'){
          std::cout<<"Su precio total es: ";
          std::cout<<importe*0.07;
    }
          
    while (iva=='s')||(iva=='S'){
          std::cout<<"Su precio total es: ";
          std::cout<<importe*0.04;
    }
    
    std::cin>>salir;
}
