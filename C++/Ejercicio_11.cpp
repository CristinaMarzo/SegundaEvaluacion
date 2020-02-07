#include<iostream>
/*Este programa sirve para comparar un numero y el numero de letras de
una palabra*/

int main(){
    //definicion variables
    char salir;
    int cont;
    int longitud;
    char palabra[15];
    int num;
    
    //Bienvenida
    std::cout<<"Bienvenid@ al propgrama para comparar un  numero y una palabra\n";
    //introducir numero a comparar
    std::cout<<"Introduzca su numero: ";
    std::cin>>num;
    
    //introducir lista de caracteres aka palabras
    std::cout<<"Introduzca su palabra: ";
    std::cin>>palabra;
    
    //contar las letras
    longitud=0;
    for(cont=0; cont<=14; cont++){
                if (palabra[cont]!='\0'){
                   longitud = longitud+1;
                   }
    }
    
    //decir cuantas letras tienes
    std::cout<<"\nTu palabra tiene ";
    std::cout<<longitud;
    std::cout<<" letras.";
    
    //comparar caracteres con num
    if (longitud==num){
                   std::cout<<"Su palabra tiene el mismo numero";
                   std::cout<<" de caracteres que su numero introducido.";
    }
    
    if (longitud!=num){
                   std::cout<<"Su palabra no tiene el mismo numero";
                   std::cout<<" de caracteres que su numero introducido.";
    }
    //codigo de escape
    std::cin>>salir;
}
