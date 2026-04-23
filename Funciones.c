//Nombre:Samara Mardueño Bernardino
//Codigo:222727303
//Descripcion:Aprendiendo funciones:
                          
                          
#include<stdio.h>
//Declarar función
int sumar(int a,int b);
int numeroMagico();
void mostrarEdad(int edad);
void mensaje();

int main(){
    int resultado;
//llamar la funcion
    resultado = sumar(56,78);
    printf("El resultado es: %d \n",resultado);
    printf("El numeromagico es: %d\n",numeroMagico());
    mostrarEdad(45);
    mensaje();
    
    getch();
    return 0;
    }
    
//función con parametros y retornos
int sumar(int a,int b){
    int suma;
    suma = a + b;
    
    return suma;
    }
//funcion con parametro y sin retorno

void mostrarEdad(int edad){
     
     printf("Tu edad es: %d anios\n",edad);
     }

//funcion sin parametro y con retorno

int numeroMagico(){
    int numero=67;
    return numero;
    
    }
//Sin parametros y sin retorno
void mensaje(){
     printf("Hola\n");
     
     }
