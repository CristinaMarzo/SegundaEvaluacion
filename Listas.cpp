#include<iostream>

//listas
//para guardar palabras (cadenas de caracteres) o muchos numeros
//los va a guardar en la memoria dinamica


/*Vamos a hacer un programa que nos pide 10 numeros y los guarde para calcular la media*/

int main(){
    
    //definicion de variables
    char salir;
    int num[4];
    /*vector = lista - conjuntos de numeros
    array = vector
    textos traducidos directamente del ingles en latinoamerica: formaciones
    arrays de tama�o definido que no se puede cambiar en tiempo de ejecucion
    array de tamanno 4
    vamos a reservar cuatro posiciones de memoria que pocupan lugares contiguos
    en la memoria dinamica del ordenador para introducir 4 numeros enteros
    primer array es 0*/
    int cont;
    
    /*como cont se va desplazando / barriendo, la posicion de la casilla va
    cambiando tambien se va barriendo*/
    //Introducimos los numeros en el vector
    for(cont=0; cont<=3; cont++){
          std::cout<<"Introduzca su numero aqui: ";
          std::cin>>num[cont];
    }
    
    //Sacamos los numeros introducidos por pantalla
    std::cout<<"Has introducido los siguientes numeros: \n";
    std::cout<<"    ";
    for(cont=0; cont<=3; cont++){
          std::cout<<num[cont];
          std::cout<<", ";
    }
    
    //c�digo de final
    std::cin>>salir;
}
