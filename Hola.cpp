#include<iostream>
int main (){
    //Definición de variables
    char salir; 
    char respuesta;
    std::cout <<"Hola mundo, mi primer programa \n";
    std::cout <<"Eres guapo? (s/n): ";
    std::cin>> respuesta;
    //&& significa AND
    //|| significa OR
    if(respuesta=='s'||respuesta=='S'){
        std::cout <<"Hola guapo"; 
    }
    else{
        std::cout <<"Hola feo"; 
    }
    std::cin>>salir;
}
