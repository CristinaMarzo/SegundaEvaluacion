#include<iostream>

int main(){
    //declaracion de palabras
    char salir;
    char palabra[10];
    int cont;
    int longitud;
    longitud=0; //inicializo la variable
    
    std::cout<<"Introduzca aqui su palabra: ";
    std::cin>>palabra;
    
    //DIRTY TRICK
    for (cont=0; palabra[cont]!='\0'; cont++){
          longitud++;
    }
    /* a bajo nivel, un while y un for son equivalentes
    while equivalente al for:
    while(palabra[cont]!='\0'){
               longitud++;
               cont++;
    }
    */
    
    //salida
    std::cout<<"Su palabra (";
    std::cout<<palabra;
    std::cout<<") tiene ";
    std::cout<<longitud;
    std::cout<<" letras.";
    //codigo de escape
    std::cin>>salir;
    
    //empaquetar: esto funciona, lo empaqueto y lo uso para otra cosa. Lo convierto
    //en una funcion para usarlo en otro programa
}
