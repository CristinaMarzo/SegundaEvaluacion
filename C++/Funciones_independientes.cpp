#include<iostream>
#include<stdio.h>//libreria para printf
#include<stdlib.h>//libreria para malloc
#include<cris_func.h>
#include<string.h>//libreria para strcopy

/*
1.- Ordene las palabras por el n de consonantes
2.- Que sustituya las A por O solo en las palabras de menos de 5 letras
3.- Que codifique las palabras con una clave
4.- HAZ UN PROGRAMA QUE GUARDE 3 NUMEROS, AL AZAR QUE NO SE REPITA NI EN LAS FILAS NI EN LAS COLUMNAS */
using namespace std;

int devuelve_consonantes(char *palabra[]){
    int longitud=0;
    int cont=0;
    char vocales[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int nvocales=0;
    
    for (cont=0; cont<devuelve_longitud(*palabra); cont++){
       while (*palabra[cont]!='\0'){ //distinguir la longitud total de la palabra
             for(nvocales=0; nvocales<10; nvocales++){ //ir contando las vocales
                             while (*palabra[cont] == vocales[nvocales]){ //ir comparando. positivo, contar una mas en longitud
                                   longitud++;
                             }
             }
             cont++; //ir corriendo la letra
       }
    }
    return (longitud); //resultado
}

int main(){
    char salir;
    char *palabras[4]; //declarar puntero principal
    char aux[20]; //declarar puntero char auxiliar
    int longitud = 0;
    int cont;
    
    
    //Leo las cuatro palabras
    for (int cont=0; cont<4; cont++){
        cout<<"Introduce tu palabra: ";
        cin>>aux;
        longitud = devuelve_longitud(aux);
        palabras[cont] = (char *)malloc((longitud+1)*(sizeof(char)));//reserva. que calcule los bits, porque no lo calcula el automaticamente
        //si te comes el +1 es un error aleatorio
        //conversion forzada: de lo que de malloc lo transforma en un puntero caracter para que no pete
        //malloc = memory allocation
        strcpy(palabras[cont], aux);//string copy. destino, origen
        //espera que los dos parametros sean las posiciones de memoria de la primera letra de cada una de las palabras
    }
    
    cout<<"\nLISTA DE PALABRAS\n"; //Imprimir palabras tal cual
    for (cont=0; cont<4; cont++){
        printf("%s\n", palabras[cont]);
    }
    
    cout<<"\nERROR TRIAL\n";
    for (cont=0; cont<4; cont++){
    cout<<devuelve_consonantes(palabras);
    }
    
    cin>>salir;
}
