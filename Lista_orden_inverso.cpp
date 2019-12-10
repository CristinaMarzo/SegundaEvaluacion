#include<iostream>

//listas
//para guardar palabras (cadenas de caracteres) o muchos numeros
//los va a guardar en la memoria dinamica


/*Vamos a hacer un programa que nos pide 10 numeros y los guarde para calcular la media*/

int main(){
    
    //definicion de variables
    char salir;
    float suma_num;
    int num[4];
    /*vector = lista - conjuntos de numeros
    array = vector
    textos traducidos directamente del ingles en latinoamerica: formaciones
    arrays de tamanno definido que no se puede cambiar en tiempo de ejecucion
    array de tamanno 4
    vamos a reservar cuatro posiciones de memoria que ocupan lugares contiguos
    en la memoria dinamica del ordenador para introducir 4 numeros enteros.
    El PRIMER ARRAY es 0*/
    int cont;
    float media;
    
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
    std::cout<<"\n";
    
    //Calculamos la media
    std::cout<<"\nMEDIA\n";
    //Inicializamos la variable contadora
    suma_num=0;
    for(cont=0; cont<=3; cont++){
                //suma acumulada o varaible contadora
                suma_num=suma_num+num[cont];
    }
    std::cout<<"La suma vale: ";
    std::cout<<suma_num;
    media=suma_num/cont;
    std::cout<<"\nSu media es: ";
    std::cout<<media;
    
    //Mostramos la lista en orden inverso
    std::cout<<"\n\nSus numeros en orden inverso son: \n";
    std::cout<<"      ";
    for(cont=3; cont>=0; cont--){
                std::cout<<num[cont];
                std::cout<<", ";
    }
    
    //código de final
    std::cin>>salir;
}
