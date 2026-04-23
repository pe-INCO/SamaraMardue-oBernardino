/*
Nombre:Samara Mardueño Bernardino
Codigo:222727303
Descripcion:
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int numeroale = rand()%101,numero,i=0,puntos = 0,opcion,n=0;
    

    while(n < 100){
         if(i == 5){
       printf("E numero correcto era %d\n",numeroale);     
       }
        printf("================ Menu =================\n");
        printf("1. Jugar\n");
        printf("2. Ver puntuacion\n");
        printf("3. Salir\n");
        printf("Que es lo que quieres hacer?: \n");
        scanf("%d",&opcion);
        if(opcion == 2){
                  printf("Tu puntuacion es %d \n",puntos);
        }else if(opcion == 3){
              printf("Gracias por jugar\n");
              opcion = 3;
    }else if(opcion == 1){
     i= 0;
     
     
     while(i<5){
       
     printf("Dime un numero: \n");
     
     scanf("%d",&numero);
    
     if(numeroale > numero){
                 printf("Es numero es mayor\n");
                 i= i+1;
                 puntos = puntos - 5;
     }else if(numeroale < numero){
       printf("Es un numero menor\n"); 
        i=i+1;
        puntos = puntos - 5;
     }else{
      printf("Acertaste felicidades el numero era: %d \n",numeroale);
      i= 6;
      puntos = puntos + 10;
      printf("Tus puntos ahora son: %d\n",puntos);
    }
    }
    }else{
          printf("Esa opcion no es valido");
          }
    }
    getch();
    return 0;
    }
