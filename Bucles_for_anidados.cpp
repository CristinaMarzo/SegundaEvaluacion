#include<iostream>

/*Vamos a hacer un programa que dinuje un bbello cuadrado del
tamaño que nos pregunte el usuario.*/

int main(){
    // Defincion de variables   
    char salir;
    int lado, col, fil;
    
    //Codigo
    std::cout<<"Dime el tamanno del cuadrado: ";
    std::cin>>lado;
    
    //nested for
    for(col=1; col<=lado; col++){
                for(fil=1; fil<=lado; fil++){
                           std::cout<<"* ";
                }
                std::cout<<'\n';
    }
    
    std::cin>>salir;
}
