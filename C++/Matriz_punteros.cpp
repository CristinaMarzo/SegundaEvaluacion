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
    ordenador siempre ejecuta de forma lineal
    reservar que cada columna colgante tenga la misma longitud, utilizando la memoria dinamica del ordenador
    dynamic memory allocation (reserva dinamica de memoria) --> programacion orientada a objetos*/
    
/*asignar datos: entero, float, char, array. array tiene las posiciones contiguas / consecutivas.
cuando yo declaro una variable lo que guardo es la posicion de memoria. si con printf pusiera un * le diria que salte al contenido.
char *palabras[4] --> estoy haciendo un vector de 4 posiciones que contiene 4 direcciones hexadecimales
cuando declaras la variable el * siginifica que guarde la direccion hexadecimal y cuando la estas reclamando significa que salte al contenido
palabra a secas es la direccion / casilla de la primera casilla de palabra
palabra:
        vamos
        a
        guardar
        silencio
*(*palabra) primero para saltar al contenido de la primera casilla de palabra y el segundo para saltar al contenido de esa direccion
*((*palabra)+4)
direccion palabra prima frente a la suma
*(*(palabra+3)+6)*/

int main(){
    char salir;
    /*escribe palabra: direccion de momria de la primera casilla.
    *palabra --> direccion de la primera casilla
    primera letra: printf(*(*palabra))
    *(*(palabra+1)+2)
    *: salta dentro de esta posicion */
    std::cin>>salir;
    }
