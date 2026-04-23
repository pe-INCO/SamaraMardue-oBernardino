#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;                  
    int matriz[3][4];           
    char nombres[3][30];        
    int opcion, usuario, a,x,y, j;

    do {
        printf("=======================Menu===================\n");
        printf(" 1. insertar \n 2. ver matriz \n 3. prom estudiante \n 4. prom materia \n 5. nota mas alta \n 6. Salir \n");
        printf("==============================================\n");
        printf("Que es lo que quieres hacer hoy?: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                system("cls");
                if(i < 3) {
                    printf("Bienvenido, cual es tu nombre? ");
                    scanf("%s", nombres[i]);   
                    usuario = i;
                    printf("Tu usuario es el numero %d\n", i);

                    for(j = 0; j < 4; j++) {
                        printf("Calificacion de materia %d: ", j+1);
                        scanf("%d", &matriz[i][j]);   
                        if(matriz[i][j]>100){
                                             
                                           printf("Debe estar en un rango de 1-100. "); 
                                           scanf("%d", &matriz[i][j]);
                        }
                    }
                    i++; // avanzar al siguiente estudiante
                } else {
                    printf("Ya se registraron los 3 estudiantes.\n");
                }
                system("pause");
                break;

            case 2:
                system("cls");
                printf("Cual es tu usuario? ");
                scanf("%d", &a);
                if(a >= 0 && a < i) {
                    printf("Estudiante: %s\n", nombres[a]);
                    for(j = 0; j < 4; j++) {
                        printf("Materia %d: %d\n", j+1, matriz[a][j]);
                    }
                } else {
                    printf("Usuario no encontrado.\n");
                }
                system("pause");
                break;

            case 3:
                system("cls");
                printf("Cual es tu usuario? ");
                scanf("%d", &a);
                if(a >= 0 && a < i) {
                    float promedio = 0;
                    for(j = 0; j < 4; j++) {
                        promedio += matriz[a][j];
                    }
                    promedio /= 4.0;
                    printf("El promedio de %s es %.2f\n", nombres[a], promedio);
                } else {
                    printf("Usuario no encontrado.\n");
                }
                system("pause");
                break;

            case 4:
                system("cls");
                printf("Cual materia quieres ver (1-4)? ");
                scanf("%d", &a);
                if(a >= 1 && a <= 4) {
                    float promedio = 0;
                    for(j = 0; j < i; j++) {
                        promedio += matriz[j][a-1];
                    }
                    promedio /= i;
                    printf("El promedio de la materia %d es %.2f\n", a, promedio);
                } else {
                    printf("Materia invalida.\n");
                }
                system("pause");
                break;

            case 5:
                system("cls");
                {
                    int max = matriz[0][0];
                    int est = 0, mat = 0;
                    for( x = 0; x < i; x++) {
                        for( y = 0; y < 4; y++) {
                            if(matriz[x][y] > max) {
                                max = matriz[x][y];
                                est = x;
                                mat = y;
                            }
                        }
                    }
                    printf("La nota mas alta es %d del estudiante %s en la materia %d\n", max, nombres[est], mat+1);
                }
                system("pause");
                break;

            case 6:
                printf("Gracias por utilizar el programa\n");
                system("pause");
                break;

            default:
                printf("Opcion invalida.\n");
                system("pause");
        }
    } while(opcion != 6);

    return 0;
    getch();
}
