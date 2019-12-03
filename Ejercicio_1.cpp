#include<iostream>

int main(){
    char salir;
    int n1;
    int n2;
    int n3;
    int n4;
    
    std::cout<<"Este programa solo sirve para multiplicar numeros enteros.\n";
    std::cout<<"Si introduce un numero decimal, el programa no funciona.\n";
    std::cout<<"Introduzca aqui su primer numero: ";
    std::cin>>n1;
    //estructura while: (condicion de finalizacion)
    while(n1==0){
            std::cout<<"Su primer numero es 0.\n";
            std::cout<<"Introduzca su primer numero aqui: ";
            std::cin>>n1;
    }
    
    std::cout<<"Introduzca aqui su segundo numero: ";
    std::cin>>n2;
    while(n2==0){
            std::cout<<"Su segundo numero es 0.\n";
            std::cout<<"Introduzca su segundo numero aqui: ";
            std::cin>>n2;
    }
    
    std::cout<<"Introduzca aqui su tercer numero: ";
    std::cin>>n3;
    while(n3==0){
            std::cout<<"Su tercer numero es 0.\n";
            std::cout<<"Introduzca su tercer numero aqui: ";
            std::cin>>n3;
    }
    
    std::cout<<"Introudzca aqui su cuarto numero: ";
    std::cin>>n4;
    while(n4==0){
            std::cout<<"Su cuarto numero es 0.\n";
            std::cout<<"Introduzca su cuarto numero aqui: ";
            std::cin>>n4;
    }
    
    std::cout<<"Su resultado es: ";
    std::cout<<n1;
    std::cout<<" X ";
    std::cout<<n2;
    std::cout<<" X ";
    std::cout<<n3;
    std::cout<<" X ";
    std::cout<<n4;
    std::cout<<" = ";
    std::cout<<n1*n2*n3*n4;
    std::cin>>salir;
}
