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
    int cvocales=0;
    int cont=0;
    
    for (cont=0; cont<devuelve_longitud(palabra); cont++){
        for (nvocales=0; nvocales<5; nvocales++){
            if (palabra[cont] == vocales[nvocales]){
                          cvocales++;
            }
        }
    }
    return cvocales;
    
}

int contador_consonantes_bestia(char palabra[]){
    char consonantes[]={'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
    int nconsonantes;
    int cconsonantes=0;
    int cont;
    
    for (cont=0; cont<devuelve_longitud(palabra); cont++){
        for (nconsonantes=0; nconsonantes<22; nconsonantes++){
            if (palabra[cont]==consonantes[nconsonantes]){
               cconsonantes++;
            }
        }
    }
    return cconsonantes;
}

int contador_consonantes_fino(char palabra[]){
    int cconsonantes=0;
    
    cconsonantes = devuelve_longitud(palabra) - contador_vocales(palabra);
    return cconsonantes;
}
    
int cambiar_minuscula_por_mayuscula(){
    //diferencia ascii 32 mayus a minus
    //sumar char + entero

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
    
    std::cout<<"\nSu numero de consonantes a lo bestia es: "<<contador_consonantes_bestia(palabra);
    
    std::cout<<"\nSu numero de consonantes a lo fino es: "<<contador_consonantes_fino(palabra);
    
    std::cout<<"\nSu palabra troleada es: "<<palabra;
    
    std::cin>>salir;
    
}
