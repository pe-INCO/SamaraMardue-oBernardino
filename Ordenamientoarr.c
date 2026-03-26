//Nombre samara Mardueño bernardino
//Codigo 222727303
//Descripcion

#include<stdio.h>

int arreglo[5]={5,8,4,2,17};
void ordenar(int arreglo[],int n);

int main(){
    
    int i,n;
    n = sizeof(arreglo)/sizeof(arreglo[0]); //Se iguala n al tamaño del arreglo
    
    printf("Contenido del arreglo:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arreglo[i]); // imprime cada elemento
    }
    
    ordenar(arreglo, n);//Funcion de ordenamiento
    
    printf("\nArreglo ordenado:\n");
    for(i=0;i<n; i++){
           printf("%d ",arreglo[i]);                
    }
    
    getch();
    return 0;
    
    }
    
//FUNCION PARA ORDENAR
void ordenar(int arreglo[],int n){
     
    int i, j, temp;
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                           
                // Intercambio
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}
      
     
