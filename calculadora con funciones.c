//Nombre:Samara Mardueño Bernardino
//Codigo:222727303
//Descripcion:Aplicanco funciones
                          
                          
#include<stdio.h>

int sumar(int a, int b);
int restar(int a, int b);
float dividir(float a,float b);
int multiplicar(int a, int);


int main(){
    int a,b;
    int opcion;
    float c,d;
    
  
    
 do{
    
    printf("=======================Menu===================\n");
    
    printf(" 1. Sumar \n 2. Restar \n 3. Dividir \n 4. Multiplicar \n 5. Salir \n");
    printf("==============================================\n");
    printf("Que es lo que quieres hacer hoy?: ");
    scanf("%d",&opcion);
                        
    switch(opcion){
                   case 1:
                        system("cls");
                        printf("Cual es tu primer numero: \n");
                        scanf("%d",&a);
                        
                        printf("Cual es tu Segundo numero: \n");
                        scanf("%d",&b);
                        
                        printf("La suma de %d + %d es igual a: %d\n",a,b,sumar(a,b));
                        break;
                        system("pause");
                   case 2:
                        system("cls");
                        printf("Cual es tu primer numero: \n");
                        scanf("%d",&a);
                        
                        printf("Cual es tu Segundo numero: \n");
                        scanf("%d",&b);
                        
                        printf("La resta de %d - %d es igual a: %d \n",a,b,restar(a,b));
                        break;
                   case 3:
                        system("cls");
                         printf("Cual es tu primer numero: ");
                         scanf("%f", &c);
                         printf("Cual es tu segundo numero: ");
                         scanf("%f", &d);

                        if (d == 0) {
                        printf("Error: no se puede dividir entre cero\n");
                        } else {
                        printf("La division de %.2f / %.2f es igual a: %.2f\n", c, d, dividir(c, d));
                        }
               
                        break;
                        
                   case 4:
                        system("cls");
                        printf("Cual es tu primer numero: \n");
                        scanf("%d",&a);
                        
                        printf("Cual es tu Segundo numero: \n");
                        scanf("%d",&b);
                        
                        printf("La multiplicacion de %d * %d es igual a: %d \n",a,b,multiplicar(a,b));
                        
                        break;
                        
                        
                   case 5:
                        system("cls");
                        printf("Gracias por utilizar este programa :)");
                        
                   
                   
                   }
    }while(opcion != 5);
    getch();
    return 0;
    }
    
//Funcion suma    
int sumar(int a, int b){
    int suma;
    suma = a + b;
    
    return suma;
    }
    
//Funcion resta
int restar(int a, int b){
    int resta;
    resta = a - b;
    
    return resta;
    }

//Funcion divicion
float dividir(float c,float d){

    if (d == 0) {
        printf("Error: no se puede dividir entre cero\n");
        return 0; // Devuelve 0 como valor por defecto
    }
    return c / d;
}

//funcion multiplicacion
int multiplicar(int a, int b){
    int multiplicar;
    multiplicar = a * b;
    
    return multiplicar;
    
    
    }



    
    
