//Nombre samara Mardueño bernardino
//Codigo 222727303
//Descripcion

#include<stdio.h>

int arreglo[5]={};
void ordenar(int arreglo[],int n);

int main(){
    
    int i,n,opcion,a;
    n = sizeof(arreglo)/sizeof(arreglo[0]); //Se iguala n al tamaño del arreglo
    
   printf("1. Fifo \n2. Lifo\n");
   scanf("%d",&a);
   
   switch(a){
             
        case 1:
        
   printf("1. Encular \n2. desencolar\n 3. Mostrar\n 4.Salir\n");
   printf("Que es lo que quieres hacer hoy");
   scanf("%d",&opcion);
   
   switch(opcion){
                  
                  case 1:
                       
                      
                       for(i=0;i<n;i++){
                       
                       printf("Que elemento quieres ingresar? ");
                       scanf("%d",&arreglo[i]);
                       
                       }
                       
                       printf("Muy bien ");
                       
                       break;
                  case 2:
                  
                       break;
                  
                  case 3:
                       
                       break;

                  
                  }
    /* case 2:
          
          printf("1. Encular \n2. desencolar\n 3. Mostrar\n 4.Salir\n");
          printf("Que es lo que quieres hacer hoy");
          scanf("%d",opcion);
   
          switch(opcion){
                  
                  case 1:
                       
                       while(i=0;i>)
                       printf("Que elementoquieres ingresar? ");
                       
                       
                       break;
                  case 2:
                  
                       break;
                  
                  case 3:
                       
                       break;

                  
                  }*/
               }  
   return 0;
   getch();
    
    }
