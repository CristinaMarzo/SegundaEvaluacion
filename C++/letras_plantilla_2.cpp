#include<iostream>
#include<cris_func.h>



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
    
    //std::cout<<"\nSu numero de consonantes a lo bestia es: "<<contador_consonantes_bestia(palabra);
    
    std::cout<<"\nSu numero de consonantes a lo fino es: "<<contador_consonantes_fino(palabra);
    
    std::cout<<"\nSu palabra troleada con vocales es: "<<palabra;
    
    std::cout<<"\nSu palabra troleada con mayusculas y minusculas es: ";
    cambiar_minuscula_por_mayuscula(palabra);
    std::cout<<palabra;
    
    std::cin>>salir;
    
}
