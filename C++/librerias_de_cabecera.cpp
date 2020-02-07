/* librerias de cabecera
vocaciones a funciones en el cuerpo principal

#include <iostream>  --> instrucciones al preprocesador

int devuelve_suma (){ --> funcion que devuelve --> FUNCION porque devuelve
    return (suma)

int main (){--> cuerpo principal

si la funcion no devuelve nada al cuerpo principal(sin return) -->  void (vacio) --> PROCEDIMIENTOS

necesidad de doble check --> decirte que lo ha hecho bien

versiones antiguas de c main llevaba void y paso a llevar un int:
          
int main (){
    return (0);    
}
en sistemas operativos modernos control de procesos, control de tareas
si tu dejas varios procesos colgados consumen memoria ram y pueden llegar a bloquear el ordenador --> panatallazo azul
virus que abrian hilos y no los cerraban

cuando detectan programas que se quedan colgados, los cortan

muchas funciones encima codigo principal --> programa se vuelve 
inmanejable --> coger funciones y llevarlas a otro fichero (.h)

include significa corta - pega, no hace nada informatico

soluciones:
           1. poner direccion completa. ordenadores con muchos usuarios no llevan direccion completa
           2. ponerlo en el mismo lado donde esta iostream.h --> lugar de defecto para coger los ficheros de cabecera
*/
