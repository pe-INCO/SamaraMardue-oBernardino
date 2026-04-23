/*
Nombre: Samara Mardueño Bernardino
Codigo: 222727303
Descripcion:
*/
#include<stdio.h>

int main(){
    float num1,num2,opcion=1;
    char signo;
    
   
    
    printf("Dime tu primer numero: \n");
    if(scanf("%f",&num1)==1){
    printf("Es numero\n\n");
    
    printf("Que operacion quieres realizar (coloca el signo + - * /): \n");
    scanf(" %c", &signo);

    while (signo != '+' && signo != '-' && signo != '*' && signo != '/') {
        printf("Operacion no valida. Intenta de nuevo (+ - * /): \n");
        scanf(" %c", &signo);
    }


    
    printf("Dime tu segundo numero: \n");
    if(scanf("%f",&num2)==1){
    printf("Es numero\n\n");
    
   
    
    switch(signo){
                   case '+':
                        printf("La suma de tus numeros es: %.2f",num1+num2);
                        break;
                   case '-':
                        printf("La resta de tus numeros es: %.2f",num1-num2);
                        break;
                   case '*':
                        printf("La multiplicacion de tus numeros es: %.2f",num1 * num2);
                        break;
                   case '/':
                        if(num2 == 0){
                                printf("La divicion de los numeros no puede ser realizada");
                        }else{
                        printf("La divicion de tus numeros es: %.2f", num1 / num2);
                        }
                        break;
                   default:
                        printf("No es valido");
                   }
      }else{
      printf("Es texto");
      }
      }else{
      printf("Es texto");
      }
    printf("\nGracias por utilizar mi programa");
    
    
    getch();
    return 0;
    }
