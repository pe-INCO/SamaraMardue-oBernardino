/*
Nombre: Samara Mardueño Bernardino
Codigo: 222727303
Descripcion: Serie de fibonacci con validacion de numeros
*/

#include<stdio.h>
int main(){
    
    int i,repeticion,a = 1,b = 0,c = 0;
    printf("Dime cuantas veces quieres hacerlo: ");
    scanf("%d",&repeticion);
    
    while(repeticion != 1 && repeticion !=20 ){
       printf("No es numero valido \n");
                     scanf(" %d", &repeticion);
    }
    while(repeticion < 0 ){
        printf("Tu numero es negativo vuelve a intentarlo \n");
               scanf(" %d", &repeticion);
    }             
    
    
    for(i = 0; i < repeticion; i++){
          
          printf("El numero de fibonacci es: %d \n",b);
          
          c = a + b;
          a = b;
          b = c;
          
    } 
    
    getch();
    return 0;
    }
