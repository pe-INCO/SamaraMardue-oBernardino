/*
Nombre: Samara Mardueño Bernardino
Codigo: 222727303
Descripcion: Serie de fibonacci con validacion de numeros
*/

#include<stdio.h>
int main(){
    
    int i,repeticion,a = 1,b = 0,c = 0;
    printf("Dime cuantas veces quieres hacerlo: ");
    if(scanf("%d",&repeticion)== 1){
                 printf("Es numero\n"); 
                 repeticion+1;
                              
    
    
    for(i = 0; i < repeticion; i++){
          
          printf("El numero de fibonacci es: %d \n",b);
          
          c = a + b;
          a = b;
          b = c;
          
    }
               }else{
                     printf("No es numero");
                     }
    
    
    getch();
    return 0;
    }
