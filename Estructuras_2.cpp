#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*manera alternativa de declarar estructuras*/

int main (){
    char salir;
    typedef struct{
            char nombre[20];
            int edad;
            char email[20];
            int n_amigo;
            //datosPersona *siguiente lista enlazada cuando no sabes cuantos usuarios tienes
    } datosPersona;
    
    //reservar memoria para los datos de una persona
    datosPersona alumno[3]; //esencial
    //datosPersona *aux;
    //aux=&alumno1;
    //aux = (datosPersona *)malloc(3*sizeof(datosPersona));
    
    for (int cont=0; cont<3; cont++){
        std::cout<<"Dime tu nombre: ";
        std::cin>>alumno[cont].nombre;
        std::cout<<"\nDime tu edad: ";
        std::cin>>alumno[cont].edad;
        std::cout<<"\nDime tu email: ";
        std::cin>>alumno[cont].email;
        std::cout<<"\nDime tu n_amigo: ";
        std::cin>>alumno[cont].n_amigo;
        std::cout<<"\nDime cuanto dinero tienes: ";
        std::cin>>alumno[cont].dinero;
    }
    
    //recuperar
    std::cout<<"\nLISTA DE RESPUESTAS";
    for (int cont=0; cont<3; cont++){
        std::cout<<"\nEres e alumno numero "<<cont+1<<".";
        std::cout<<"\nTu nombre es: "<<alumno[cont].nombre;
        std::cout<<"\nTu edad es: "<<alumno[cont].edad;
        std::cout<<"\nTu email es: "<<alumno[cont].email;
        std::cout<<"\nTu n_amigo es: "<<alumno[cont].n_amigo;
        std::cout<<"\nTienes este dinero: "<<alumno[cont].dinero;
    }
    
    std::cin>>salir;
}
