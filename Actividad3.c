/*
Nombre: Samara Mardueño Bernardino
Codigo:222727303
Descripcion:
*/

#include<stdio.h>

int main(){
    int num1,num2,num3;
    
    
    printf("Dime tu primer numero: ");
    scanf("%d",&num1);
    printf("Dime tu segundo numero: ");
    scanf("%d",&num2);
    printf("Dime tu tercero numero: ");
    scanf("%d",&num3);
    
    
    
    if(num1 > num2){
             printf("Tu numero %d es mayor a %d \n",num1,num2);
    }else if (num2 > num1){
           printf("Tu numero %d es mayor a %d\n",num2,num1);
    }else{
         printf("Tu numeros son iguales\n");
    }
    
    if(num1 > num3){
             printf("Tu numero %d es mayor a %d\n",num1,num3);
    }else if (num3 > num1){
           printf("Tu numero %d es mayor a %d\n",num3,num1);
    }else{
         printf("Tu numeros son iguales\n");
    }
    
    if(num2 > num3){
             printf("Tu numero %d es mayor a %d\n",num2,num3);
    }else if (num3 > num2){
           printf("Tu numero %d es mayor a %d\n",num3,num2);
    }else{
         printf("Tu numeros son iguales\n");
    }
    
    getch();
    return 0;
    }
