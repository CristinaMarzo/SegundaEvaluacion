#include<iostream>
#include<stdio.h>//libreria para printf
#include<stdlib.h>//libreria para malloc
#include<cris_func.h>
#include<string.h>//libreria para strcopy

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
        palabras[cont] = (char *)malloc((longitud+1)*(sizeof(char)));//reserva. que calcule los bits, porque no lo calcula el automaticamente
        //si te comes el +1 es un error aleatorio
        //conversion forzada: de lo que de malloc lo transforma en un puntero caracter para que no pete
        //malloc = memory allocation
        strcpy(palabras[cont], aux);//string copy. destino, origen
        //expera que los dos parametros sean las posiciones de memoria de la primera letra de cada una de las palabras
        
    }
    
    std::cout<<"\nLISTA DE PALABRAS\n";
    for (cont=0; cont<4; cont++){
        printf("%s\n", palabras[cont]);
    }
    
    
    std::cin>>salir;    
}
