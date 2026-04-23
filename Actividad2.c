/*
Nombre:Samara Mardueño Bernardino
Codigo:222727303
Descripcion: Este programa se encarga de verificar si es numero o letra si es positivo negativo o 0
si es decimal o entero si es positivo o negativo y si esta en el rango
            */

#include<stdio.h>

int main(){
    float numero;
    printf("Dime un numero: ");
    
if(scanf("%f",&numero)==1){
    printf("Es numero\n");
    
    if (numero >0){
          printf("Tu numero es entero\n");
    }else if(numero<0){
          printf("Tu numero es negativo\n");
    }else{
          printf("Tu numero es cero\n");
    }
                
    if(numero == (int)numero){
               printf("Tu numero no es decimal\n");
    }else{
          printf("Tu numero es decimal\n");
    }
    
       if (numero > 0){
       printf("Tu numero es positivo\n");      
    }else{
        printf("Tu numero es negativo\n");     
    }          
   
    if (numero < 100 && numero > -1){     
           printf("El numero esta en un rango valido\n"); 
    }else{
          printf("Tu numero no esta en un rango valido\n");
    }
}else{
      printf("Es texto");
      }

                  
   getch ();
   return 0; 
}
   
