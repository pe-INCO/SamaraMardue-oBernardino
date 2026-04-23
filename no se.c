//librerías
#include <stdio.h>
#include <string.h>
#include <math.h>

//variables
    char nombre[50];
    double monto = 0, tasa = 0;
    int plazo = 0;


int main (){
int valido;
  int  tam;
//Ingresa el nombre Andrea

 do {
        valido = 1; 
        printf("Ingresa el nombre del solicitante: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = 0; 


        tam = strlen(nombre);
        if (tam < 3 || tam > 40) {
            valido = 0;
        }


        for ( i = 0; i < tam; i++) {
            if (!isalpha(nombre[i]) && nombre[i] != ' ') {
                valido = 0;
                break;
            }
        }


        if (!valido) {
            printf("Error: Nombre invalido. Use solo letras (3-40 caracteres).\n");
        }
    } while (valido == 0);




 















