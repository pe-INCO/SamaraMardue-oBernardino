//Nombre samara Mardueño bernardino
//Codigo 222727303
//Descripcion

#include<stdio.h>

int arreglo[5]={5,8,4,2,17};
void ordenarborbuja(int arreglo[],int n);
void insertionordenar(int arreglo[],int n);
void swap(int *a, int *b);
int partition(int arreglo[], int low, int high);
void quickSort(int arreglo[], int low, int high);

int main(){
    
    int i,n;
    n = sizeof(arreglo)/sizeof(arreglo[0]); //Se iguala n al tamaño del arreglo
    
    printf("Contenido del arreglo:\n");
    for (i = 0; i < n; i++){
        printf("%d ", arreglo[i]); // imprime cada elemento
    }
    
    ordenarborbuja(arreglo, n);//Funcion de ordenamiento
   
    
    printf("\nManera de ordenamiento Burbuja:\n");
    for(i=0;i<n; i++){
           printf("%d ",arreglo[i]);                
    }
    
    
    insertionordenar(arreglo, n);
    
    printf("\nManera de ordenamiento Insertion:\n");
    
    for(i=0;i<n; i++){
           printf("%d ",arreglo[i]);                
    }
    
    quickSort(arreglo,0,n-1);
    
    printf("\nManera de ordenamiento Quick:\n");
    
    for(i=0;i<n; i++){
           printf("%d ",arreglo[i]);                
    }
    
    getch();
    return 0;
    
    }
    
//FUNCION PARA ORDENAR
void ordenarborbuja(int arreglo[],int n){
     
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
//Funcion insertionSort    
void insertionordenar(int arreglo[],int n){
   int a,j,i;
   
   for(i=1;i<n;i++){
      a = arreglo[i];         
      j = i - 1;  
     
      while(j >= 0 && arreglo[j]> a){ 
      arreglo[j+1] =  arreglo[j];
      j--;
      }
      arreglo[j + 1] = a;
                 
      }   
   }     

//Funcion Quick


void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
    int i;
}

int partition(int arreglo[], int low, int high) {
   int i,j,pivot;
    
    pivot = arreglo[high],  i = low - 1;
    for (j = low; j < high; j++) {
        if (arreglo[j] <= pivot) {
            i++;
            swap(&arreglo[i], &arreglo[j]);
        }
    }
    swap(&arreglo[i + 1], &arreglo[high]);
    return i + 1;
}

void quickSort(int arreglo[], int low, int high) {
    if (low < high) {
        int pi = partition(arreglo, low, high);
        quickSort(arreglo, low, pi - 1);
        quickSort(arreglo, pi + 1, high);
    }
}
