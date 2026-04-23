//Samara Mardueño Bernardino
//Codigo 222727303
//Descripcion

#include<stdio.h>
int numeros[10]={1,2,3,4,5,6,7,8,9,10}
int numero_buscado(int num);

int main(){
    int num,i;
    
    printf("Dime el numero que quieres saber ");
    scanf("%d",&num);
    
    numero_buscado(num)
   
          
          
          
          }
    getch();
    return 0;
    }
    
    int numero_buscado(int num){
         for(i=0;i>numeros;i++){
                                
          if(num == numeros[i]){
                 printf("El numero %d ha sido encontrado en la pocicion %d",num,i);
          }else{
                 printf("El numero %d no ha sido encontrado en la pocicion %d",num,i);
                
                
          }
        }
