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

int diferencia_longitud(char *palabra1,char *palabra2){
        int cont;
        int resultado=0;
        resultado = devuelve_longitud(palabra1) - devuelve_longitud(palabra2);
        return(resultado);
}

void introducir_auxiliar_mover_y_calcular_espacio_necesario(char *palabras[]){ //este void no funciona, pero se ha intentado
     int cont;
     char aux[20];
     int longitud=0;
     
     for (cont=0; cont<4; cont++){
        std::cout<<"Introduce tu palabra: ";
        std::cin>>aux;
        longitud = devuelve_longitud(aux);
        palabras[cont] = (char *)malloc((longitud+1)*(sizeof(char)));//reserva. que calcule los bits, porque no lo calcula el automaticamente
        //si te comes el +1 es un error aleatorio
        //conversion forzada: de lo que de malloc lo transforma en un puntero caracter para que no pete
        //malloc = memory allocation
        strcpy(palabras[cont], aux);//string copy. destino, origen
        //expera que los dos parametros sean las posiciones de memoria de la primera letra de cada una de las palabras
     }
}

void bubble_sort_orden_alfabetico(char *palabras[]){ //este tampoco me funciona, me salta error de conversion de char * a char **
     int veces;
     int cont;
     char *paux;
     
     for (veces=1; veces<4; veces++){//para asegurarnos esta ordenado tiene que repetirse n - 1 veces
        for (cont=0; cont<3; cont++){
            if (strcmp(palabras[cont], palabras[cont+1])>0){ //intercambio a 3 bandas
               paux = palabras[cont];
               palabras[cont] = palabras[cont+1];
               palabras[cont+1] = paux;
               }
            }
     }
}

void multiplicar_4_numeros_int (int numeros[]){
  int resultado = 0;
  resultado = numeros[1]*numeros[2]*numeros[3]*numeros[0];
}

int devuelve_consonantes(char *palabra[]){
    int longitud=0;
    int cont=0;
    char vocales[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int nvocales=0;
    
    for (cont=0; cont<devuelve_longitud(*palabra); cont++){
       while (*palabra[cont]!='\0'){ //distinguir la longitud total de la palabra
             for(nvocales=0; nvocales<10; nvocales++){ //ir contando las vocales
                             while (*palabra[cont] == vocales[nvocales]){ //ir comparando. positivo, contar una mas en longitud
                                   longitud++;
                             }
             }
             cont++; //ir corriendo la letra
       }
    }
    return (longitud); //resultado
}
