/*
Nombre: Samara Mardueño Bernardino
Codigo:222727303
Descripcion: Este programa pide datos al usuario para medir su imc y dar un diagnostico en base a estos resultados en el programa se valida la edad el nombre peso altura
    
*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char nombre[30];
    int edad,i,esvalida=1;
    float kilos,altura,imc;
    
    printf("Cual es tu nombre Completo: ");
    fgets(nombre,sizeof(nombre),stdin);
    
    //Elimina el salto de linea
    for (i = 0; nombre[i] != '\0'; i++) {
        if (nombre[i] == '\n') {
            nombre[i] = '\0';
            break;
        }
    }
    //Valida que sea una cadena con letras y espacios
     for (i = 0; nombre[i] != '\0'; i++) {
        char c = nombre[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')||(c == ' '))) {
            esvalida = 0; // Encontró algo que no es letra
            break;
        }
     }
     if(esvalida == 0){
                 printf("Tu nombre no es valido\n");
     }else{
                 printf("Tu nombre es valido\n");
                       }

     printf("Cual es tu edad: ");
     scanf("%d",&edad);
     
     if(edad > 1 && edad < 120){
          printf("Tu edad Es valida\n");
     }else{
          printf("Tu edad es invalida\n");     
     }
    
     printf("Cual es tu peso: ");
     scanf("%f",&kilos);
     
     if(kilos > 20 && kilos < 300){
         printf("Tu peso es valido\n");
     }else{
         printf("Tu peso es invalido\n");
     }
    
     printf("Cual es tu estatura en cm: ");
     scanf("%f",&altura);
    
     if((altura == (int)altura) && (altura > 50 && altura < 250)){
          printf("Tu estatura es valida\n");          
     }else{
           printf("Tu estatura no es valida\n");      
     }
     
     imc = kilos / ((altura/100) * (altura/100));
     
     
     system("pause"); 
     system("cls"); 
    
    printf("==========================================\n");
    printf("     INFORME DE DIAGNOSTICO IMC\n");
    printf("==========================================\n\n");
    printf("Paciente: %s\n",nombre);
    printf("Edad: %d anios\n",edad);
    printf("Peso: %.2f kg\n",kilos);
    printf("Altura %.2f m\n\n",(altura / 100));
    
    
    printf("RESULTADOS:\n\n");
    printf("IMC calculado: %.2f\n",imc);

    if (imc < 18.6) {
        printf("Diagnóstico: Tu IMC de %.2f se encuentra en el nivel de bajo peso\n", imc);
    } else if (18.4<imc < 25) {
        printf("Diagnóstico: Tu IMC de %.2f se encuentra en el peso normal\n", imc);
    } else if (24<imc < 30) {
        printf("Diagnóstico: Tu IMC de %.2f se encuentra en el nivel de sobrepeso\n", imc);
    } else if (29<imc < 35) {
        printf("Diagnóstico: Tu IMC de %.2f se encuentra en el nivel de obesidad tipo 1\n", imc);
    } else if (34<imc < 40) {
        printf("Diagnóstico: Tu IMC de %.2f se encuentra en el nivel de obesidad tipo 2\n", imc);
    } else {
        printf("Diagnostico: Tu IMC de %.2f se encuentra en el nivel de obesidad tipo 3\n", imc);
    }        
    printf("==========================================");
  
    
    getch();
    return 0;
    }
