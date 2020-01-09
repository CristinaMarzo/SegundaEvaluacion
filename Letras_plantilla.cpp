#include<iostream>

// hacer una nueva funcion
//dentro del parentesis ponemos lo que recibe y delante lo que devuelve
//recibe una cadena de palabras
//preguntas: que recibe, que devuelve, como lo hace

int devuelve_longitud(char palabra[]){
    int longitud=0;//variable acumuladora o suma
    int cont=0;
    
    while (palabra[cont]!='\0'){
          longitud++;//equivale a longitud = longitud + 1
          cont++;
    }
    return (longitud);//coge el numero y lo devuelve
}

int contador_vocales(char palabra[]){
    char vocales[]={'a', 'e', 'i', 'o', 'u'};
    int nvocales;
    int cont2=0;
    int cont=0;
    
    for (cont=0; cont<devuelve_longitud(palabra); cont++){
    for (nvocales=0; nvocales<5; nvocales++){
        if (palabra[cont] == vocales[nvocales]){
                          cont2++;
        }
    }
    }
    return cont2;
    
}

int main(){
    char salir;
    char palabra[10];
    int cont;
    char vocales[]={'a', 'e', 'i', 'o', 'u'};
    int nvocales;
    
    std::cout<<"Introduzca aqui su palabra: ";
    std::cin>>palabra;
    
    std::cout<<"\nSu numero de vocales es: "<<contador_vocales(palabra);
    
    for (cont=0; cont<devuelve_longitud(palabra); cont++){
        for (nvocales=0; nvocales<5; nvocales++){
            if(palabra[cont] == vocales[nvocales]){
                             palabra[cont]='u';
            }
        }
    }
    
    std::cout<<"\nSu palabra troleada es: "<<palabra;
    
    std::cin>>salir;
    
}
