#include<iostream>
/*vamos a hacer un programa que lea una palabra y me devuelva la incial.
"el buscador de iniciales"*/

int main(){
    //definicion de variables
    char salir;
    int cont;
    int longitud=0;
    char palabra[10];
    /*el string podra tener menos de 10 letras / caracteres
    pero no podra tener mas de 10.*/
    
    /*declarar un string: guardar un vector de letras
    palabra conjunto de caracteres en codigo ASCII que ocupan lugares contiguos
    en la memoria interna del ordenador*/
    
    //primera interaccion con el usuario
    std::cout<<"Dime tu nombre: ";
    std::cin>>palabra;
    std::cout<<"\nQue nombre mas bonito.";
    
    //devolver el nombre entero para comprobar que esta bien
    std::cout<<"\nTe llamas: ";
    std::cout<<palabra;
    
    //devolver la inicial
    std::cout<<"\nLa primera letra de tu nombre es la: ";
    std::cout<<palabra[0];
    std::cout<<".";
    
    /*devolver el nombre por letras aka. animadora.
    como pone el salto de linea, da la sensacion de que lo va poniendo letra a letra,
    que es lo que hace en realidad*/
    std::cout<<"\n\n*****ANIMADORA*****";
    std::cout<<"\n";
    for (cont=0; palabra[cont]!='\0'; cont++){
        std::cout<<palabra[cont];
        std::cout<<"\n";
    }
    std::cout<<"\n";
    
    /*devolver la palabra con todas las letras de golpe.
    da la sensacion de que pone la palabra porque no hemos puesto salto de linea*/
    std::cout<<"Ahora te voy a devolver tu nombre entero: ";
    cont=0;
    for (cont=0; palabra[cont]!='\0'; cont++){
        std::cout<<palabra[cont];
    }
    std::cout<<".";
    
    //contar el numero de palabras
    for (cont=0; palabra[cont]!='\0'; cont++){
        longitud = longitud+1;
    }
    std::cout<<"\nEl nombre de ";
    std::cout<<palabra;
    std::cout<<" tiene ";
    std::cout<<longitud;
    std::cout<<" letras.";
    
    /*el ordenador no hace un vaciado de la memoria. deja lo que hay. si te
    sobran espacios puede salir cualquier letra*/
    
    /*simbolo de hasta aqui llega la palabra: barra cero: '\0',
    caracter de terminacion*/
    
    //codigo de escape
    std::cin>>salir;   
}
