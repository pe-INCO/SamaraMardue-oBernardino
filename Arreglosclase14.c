//Nombre Samara Mardueño Bernardino
//Codigo 222727303
//Descripcion

#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int  numeros[10]={0,0,0,0,0,0,0,0,0,0};

int main(){
    int opcion,i,num=0,n=0;
    
    do{
    
           printf("\n========Menuu========\n");
           printf("1. Inicializar valores \n2. Mostrar arreglo \n3. Agregar elemento al final \n");
           printf("4. Insertar Elemento en pocicion especifica \n5. Eliminar elemento en pocicion \n6. Salir\n");
           printf("Que es lo que quieres hacer hoy?:\n");
           scanf("%d",&opcion);
          
   switch(opcion){
                  
                  case 1:
                       
                       system("cls");
                       srand(time(NULL));
                       for(i = 0; i < 5; i++) {
                        numeros[i] = rand() % 100 + 1; 
                       }
                       
                       printf("Valores aleatorios:\n");
                       for(i = 0; i < 5; i++) {
                       printf("%d ", numeros[i]);
                       }
                       break;
                       
                  case 2:
                       system("cls");
                       printf("Valores aleatorios:\n");
                       for(i = 0; i < 10; i++) {
                       printf("%d ", numeros[i]);
                       }
                       
                       break;
                       
                  case 3:
                       system("cls");
                       for(i=5;i<10;i++){
                                   printf("Que numero quieres: ") ;
                                   scanf("%d",&num); 
                                   numeros[i]=num; 
                                     
                       }
                       break;
                  case 4:
                       
                       system("cls");
                       printf("Que numero quieres ingresar? ");
                       scanf("%d",&num);
                       
                       printf("En que pocicion lo quieres poner?");
                       scanf("%d",&i);
                       
                       numeros[i] = num;
                       printf("numero es %d",numeros[i]);
                       break;
                       
                  case 5:
                       system("cls");
                       printf("Que pocicion quieres eliminar?");
                       scanf("%d",&i);
                       
                       numeros[i] = 0;
                       printf("numero es %d",numeros[i]);
                       
                       break;
                  case 6:
                       system("cls");
                       printf("Gracas por utilizar este programa :)");
                       
                       break;
                  
                  }
    }while(opcion != 6);
    
    getch();
    return 0;
    
    }
