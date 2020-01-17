int devuelve_longitud(char palabra[]){
    int longitud=0;
    int cont=0;
    
    while (palabra[cont]!='\0'){
          longitud++;
          cont++;
    }
    return (longitud);
}

int contador_vocales(char palabra[]){
    char vocales[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
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

int contador_consonantes_fino(char palabra[]){
    int cconsonantes=0;
    
    cconsonantes = devuelve_longitud(palabra) - contador_vocales(palabra);
    return cconsonantes;
}
    
void cambiar_minuscula_por_mayuscula(char palabra[]){
    int cont;
    
    for (cont=0;cont<devuelve_longitud(palabra);cont++){
        if(palabra[cont]>=65 && palabra[cont]<=90){
              palabra[cont] = palabra[cont]+32;
        }
        else{
              if(palabra[cont]>=97 && palabra[cont]<=122){
                  palabra[cont] = palabra[cont]-32;
              }
        }
    }
}
