/*
Nombre:Samara Mardueño Bernardino
Codigo:222727303
Descripcion:Un programna que se centra en validaciones ya sea de nombre , edad, calificaciones
*/
#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include<stdlib.h>

int main(){
    int edad,opcion=1,valido=0,i=0,c;
    float calificacion;
    char nombre[40];
//Menu
do{ 
    system("cls");
    printf("============Bienvenido===================\n");
    printf(" 1. validar edad\n 2. validar calificacion\n 3. validar nombre\n 4. salir \n");
    printf("=========================================\n");
    printf("Que es lo que quieres hacer hoy:");
    scanf("%d",&opcion);
    getchar();
    
 //Validacion de edad   
 if(opcion==1){
               
    system("cls");

    do{
    i=0;
    printf("Cual es tu edad: ");
    
    while(1){
    if(scanf("%d",&edad)==1){
    break;
    }else{
       printf("Solo se aceptan numeros\n"); 
       while ((c = getchar()) != '\n' && c != EOF) { } //Esto lo uso para limpiar el bufer
    }
    }
    
    if(edad<18){
         printf("Esa edad no es aceptada \n");         
    }else if(edad>80){
         printf("Esa edad es demaciado grande \n");   
    }else{
          printf("Tu edad es de %.2d\n", edad);
          i=1;
    }
    }while(i!=1);
    system("pause");
//Validacion de opcion

    }else if(opcion == 2){
    system("cls");

    do{
    i=0;
    printf("Cual es tu calificacion: ");
    
    while(1){
    if(scanf("%f",&calificacion)==1){
    break;
    }else{
       printf("Solo se aceptan numeros\n"); 
       while ((c = getchar()) != '\n' && c != EOF) { } //Esto lo uso para limpiar el bufer
    }
    }
    
    if(calificacion<0){
         printf("Esa cantidad es negativa no puede ser\n");         
    }else if(calificacion>100){
         printf("Esa cantidad sobre pasa el 100 no puede ser\n");   
    }else{
          printf("calificacion es de %.2f\n", calificacion);
          i=1;
    }
    }while(i!=1);
    system("pause");
    
//Validacion de nombre        
    }else if(opcion==3){
    system("cls");
    do {
        valido = 1; 
        i = 0;      
        printf("Cual es tu nombre completo (max 39 caracteres): ");
        fgets(nombre, sizeof(nombre), stdin);

        if (strchr(nombre, '\n') == NULL) {
            printf("El nombre y apellido deben tener maximo 39 caracteres\n");
            valido = 0;
            while ((c = getchar()) != '\n' && c != EOF) {}
        } else {
            nombre[strcspn(nombre, "\n")] = '\0';
        }

        if (strlen(nombre) <= 3) {
            printf("El nombre es invalido, deben ser mas de 3 caracteres\n");
            valido = 0;
        } else {
            while (nombre[i]) {
                if (!isalpha((unsigned char)nombre[i]) && !isspace((unsigned char)nombre[i])) {
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
    } while(valido != 1);
    system("pause");
}
    
}while(opcion != 4); 

    system("cls");
    printf("Gracias por utilizar el programa de validacion");
    
    getch();
    return 0;
}
