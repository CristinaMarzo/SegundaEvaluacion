#include<iostream>
#include<stdio.h>
#include<stdlib.h>

/*ordenador siempre utiliza punteros, posicion de memoria.
    cuando nosotros le decimos que queremos una matriz:
           char palabras[10][10]
           tendemos a pensar que el ordenador coge una matriz 10*10 y va metiendo las palabras en orden
           el hace:
                   char *palabras[4]; --> siginfica que estamos guardando un vector de cuatro casillas y en
                   cada una de ellas hay un puntero hexadecimal de cada parte del array de ellas
    ordenador iempre ejecuta de forma lineal
    reservarf que cada columna colgante tenga la misma longitud, utilizando la memoria dinamica del ordenador
    dynamic memory allocation (reserva dinamica de memoria) --> programacion orientada a objetos*/

int main(){
    char salir;
    /*escribe palabra: direccion de momria de la primera casilla.
    *palabra --> direccion de la primera casilla
    primera letra: printf(*(*palabra))
    *(*(palabra+1)+2)
    *: salta dentro de esta posicion */
    std::cin>>salir;
    }
