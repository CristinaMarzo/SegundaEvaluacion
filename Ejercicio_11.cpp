#include<iostream>
/*Este programa sirve para comparar un numero y el numero de letras de
una palabra*/

int main(){
    //definicion variables
    char salir;
    int cont;
    char palabra[15];
    int num;
    
    //Bienvenida
    std::cout<<"Bienvenid@ al propgrama para comparar un  numero y una palabra";
    //introducir numero a comparar
    std::cout<<"Introduzca su numero: ";
    std::cin>>num;
    
    //introducir lista de caracteres aka palabras
    for (cont=0; cont<=num; cont++){
        std::cout<<"Introduzca su caracter: ";
        std::cin>>palabra[cont];
        }
    //codigo de escape
    std::cin>>salir;
}
