#include<iostream>
#include<stdio.h>
#include<stdlib.h>

/*tipo de datos definen el espacio designado en la memoria para ellos
metadato = puntero*/

int main(){
    int a;
    int *pa;
    /* hasta ahora en los numeros guardabamos numeros decimales. si yo le pongo *,
    le estoy diciendo que va a guardar un n hexadecimal que se supone que es la direccion donde esta otra variable */
    char salir;
    a = 2;
    pa = &a;
    /*un puntero es una variable que contiene la direccion de otra variable. & se llama ampersand*/
    int numeros[5];
    numeros[0] = 9;
    numeros[1] = 8;
    numeros[2] = 7;
    /*numeros[3] = 6;
    numeros[4] = 5;*/
    
    printf("El numero a es = %d y esta almacenado en %X",a, &a);
    /*printf tiene que tener comillas y luego lo que voy a sacar dentro de esas comillas
    descriptor (indica el tipo de dato) y contenido
    si fuera una letra: %c
    si fuera un float (numero decimal): %f
    si fuera un numero hexadecimal: %X
    %d es la ventanita por la cual yo saco el numero (foto fija)
    tengo una variabale que se llama a y lo primero que hago es decir que es un numero entero.
    estara guardado en una cierta posicion de la memoria del ordenador (este trozo es mio).
    tiene un numero hexadecimal como marcador.
    aqui (en clase) salen numeros muy parecidos porque son ordenadores clonicos.
    porcentaje x voy a sacar un numero hexadecimal. c out no esta pensado para sacar numeros hexadecimales.
    stdio.h es la lbreria que contiene la funcion printf
    para manejarse bien, el ordenador traduce los numeros de binario a hexadecimal para aclararse mejor
    y permite hacerse al informatico a la idea de donde esta exactamente mejor
    &a: porcion de memoria donde almaceno la variable a
    doble contabilidad: uno para humanos --> ir poniendo nombres*/
    
    printf("\nLa variable pa es un puntero pa = %X", pa);
    
    printf("\nnumeros[0] = %d", numeros[0]);
    printf("\nnumeros[1] = %d", numeros[1]);
    printf("\nnumeros[2] = %d", numeros[2]);
    printf("\nnumeros[3] = %d", numeros[3]);
    printf("\nnumeros[4] = %d", numeros[4]);
    printf("\nnumeros = %d",*(numeros+1));
    
    std::cin>>salir;
    }
