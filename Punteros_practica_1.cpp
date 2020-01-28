#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<cris_func.h>

int main(){
    char salir;
    char *palabras[4];//OJO: si me dejo el asteruisco, no me puede guardar el numero hexadecimal de la posicion
    int cont;
    char aux[20];
    int longitud = 0;
    
    //Leo cuatro palabras:
    for (cont=0; cont<4; cont++){
        std::cout<<"Introduce tu palabra: ";
        std::cin>>aux;
        longitud = devuelve_longitud(aux);
        palabra[cont] = (char *)malloc(longitud*(sizeof(char)));//reserva. que calcule los bits, porque no lo calcula el automaticamente
        //conversion forzada: de lo que de malloc lo transforma en un puntero caracter para que no pete
        //malloc = memory allocation
        
    }
    
    std::cin>>salir;    
}
