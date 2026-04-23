/*
Nombre:Samara Mardueño Bernardino
Codigo:222727303
Descripcion:
*/
#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>

int main(){
    
    char nombre[40];
    int plazo=0,i=0,letras=0,espacios=0,valido=1,c;
    float monto=0,tasa=0,mensual=0,pagar=0,intereses=0,tasamensual=0;
  
/*============================Nombre============================================*/
    do{
    valido=1;
    i=0;
    printf("Cual es tu nombre completo(en teclado ingles): ");
    fgets(nombre, sizeof(nombre), stdin);
    
    if (strchr(nombre, '\n') == NULL) {
            printf("El nombre y apellido deben tener maximo 39 caracteres\n");
            valido = 0;
     while ((c = getchar()) != '\n' && c != EOF) { }
    }else{ 
    nombre[strcspn(nombre, "\n")] = '\0';
    }
    if (strlen(nombre) <= 3) {
        printf("El nombre es invalido deben ser mas de 3 caracteres\n");
        valido = 0;
    }else{
     while (nombre[i]) {
        if (!isalpha(nombre[i]) && !isspace(nombre[i])) {
            printf("El nombre es invalido\n");
            valido = 0;
            break;
        }
        i++;
      }
     }
    if (valido) {
       
        printf("El nombre es %s\n", nombre);
    }
    
    }while(valido!=1);
    system("pause");

 /*=====================monto================================== */
    system("cls");

    do{
    i=0;
    printf("Cual seria el monto del prestamo tienes saldo entre 1000 a 100000: ");
    
    while(1){
    if(scanf("%f",&monto)==1){
    break;
    }else{
       printf("Solo se aceptan numeros\n"); 
       while ((c = getchar()) != '\n' && c != EOF) { } //Esto lo uso para limpiar el bufer
    }
    }
    
    if(monto<1000){
         printf("Esa cantidad es menor a la del presupuesto dado\n");         
    }else if(monto>100000){
         printf("Tu monto es demaciado grande no hay fondos suficientes\n");   
    }else{
          printf("Tu monto es de %.2f\n", monto);
          i=1;
    }
    }while(i!=1);
    system("pause");

/*=====================tasa======================================*/
   system("cls");

    do{
    i=0;
    printf("Que tasa de interes quieres entre el 5 y el 30: ");
    while(1){
      if(scanf("%f",&tasa)==1){
      break;
    }else{
       printf("Solo se aceptan numeros\n"); 
       while ((c = getchar()) != '\n' && c != EOF) { } //Esto lo uso para limpiar el bufer
    }
    }
    
     if(tasa<5){
         printf("Esa cantidad es menor a la tasa acordada\n");         
    }else if(tasa>30){
         printf("Tu tasa es demaciado grande a la acordada\n");   
    }else{
          printf("Tu tasa es de %.2f\n", tasa);
          i=1;
    }
    }while(i!=1);
    system("pause");

    
/*========================plaso================================*/
    system("cls");

    do{
    i=0;
    printf("Plazo de inteseses tienes entre 6 y 72 meses: ");
    if(scanf("%d",&plazo)==1 && plazo > 6 && plazo < 72){
       printf("La cantidad es valida tu plazo es de %d\n",plazo);
       i=1;
    }else{
       printf("Escribe una cantidad valida\n");
       i=0;
    }
    while ((c = getchar()) != '\n' && c != EOF) { }
    
    
    }while(i!=1);
    system("pause");
/*==========================Detalle del prestamo================================*/
    system("cls");
    
    printf("===============Detalle DEL PRESTAMO=============\n");
    
    printf("Solicitante: %s\n",nombre);
    printf("Monto Solicitado: %.2f\n",monto);
    printf("Tasa Anual: %.2f\n",tasa);
    printf("Plazo: %d\n",plazo);
    
    printf("====================RESULTADOS==================\n");
    tasamensual = (tasa / 100) / 12;
    mensual = (monto * tasamensual) / (1 - pow(1 + tasamensual, - plazo));
    pagar = mensual * plazo;
    intereses = pagar - monto;
    
    printf("Pago mensual: %.2f\n",mensual);
    printf("Total a pagar: %.2f\n",pagar);
    printf("Total intereses: %.2f\n",intereses);
    
    
    getch();
    return 0;
    }
