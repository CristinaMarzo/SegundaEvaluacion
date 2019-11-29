#include<iostream>
int main (){
    char salir;
    int ntabla;
    int cont;
    int resu;
    std::cout<<"Que tabla deseas que muestre?: ";
    std::cin>>ntabla;
    std::cout<<"****************************************************\n";
    std::cout<<"*                  TABLA DEL ";
    std::cout<<ntabla;
    std::cout<<"                     *\n";
    std::cout<<"****************************************************\n";
    //los for funcionan asi: expresion de inicio - condicion - incremento
    // cont = cont + 1 = cont ++
    for(int cont=0; cont<=10; cont++){
            std::cout<<ntabla;
            std::cout<<" X ";
            std::cout<<cont;
            std::cout<<" = ";
            std::cout<<ntabla*cont;
            std::cout<<"\n";
    }
    std::cin>>salir;
}
