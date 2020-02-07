#include<iostream>
#include<stdio.h>//libreria para printf
#include<stdlib.h>//libreria para malloc
#include<cris_func.h>
#include<string.h>//libreria para strcopy

using namespace std;

int diferencia_longitud(char *palabra1,char *palabra2){
        int cont;
        int resultado=0;
        resultado = devuelve_longitud(palabra1) - devuelve_longitud(palabra2);
        return(resultado);
}

int main(){
    char salir;
    char *palabras[4];//OJO: si me dejo el asterisco, no me puede guardar el numero hexadecimal de la posicion
    int cont;
    char aux[20];
    int longitud = 0;
    int veces;
    char *paux;
    
    //Leo cuatro palabras:
    for (cont=0; cont<4; cont++){
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
    
    cout<<"\nLISTA DE PALABRAS\n";
    for (cont=0; cont<4; cont++){
        printf("%s\n", palabras[cont]);
    }
    
    //ORDENAMOS POR EL METODO DE LA BURBUJA
    //strcmp = string comparation
    for(veces=1; veces<4; veces++){//para asegurarnos esta ordenado tiene que repetirse n - 1 veces
        for (cont=0; cont<3; cont++){
            if (diferencia_longitud(palabras[cont],palabras[cont+1])>0){ //intercambio a 3 bandas
               paux = palabras[cont];
               palabras[cont] = palabras[cont+1];
               palabras[cont+1] = paux;
            }
        }
    }
    
    cout<<"\nLISTA DE PALABRAS ORDENADAS\n";
    for (cont=0; cont<4; cont++){
        printf("\n%s", palabras[cont]);
    }
    
    cin>>salir;    
}

