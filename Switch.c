/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    FILE *archivo;
    char nombre[50],linea[20];
    int edad,c,opcion,usuario;
    
    archivo = fopen("datos.txt", "w");
    
      if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    
    // Escribir en el archivo
    fprintf(archivo, "1 samara 18\n");
    
    // Cerrar el archivo
    fclose(archivo);
    
    do{
    printf("===============Bienvenido===========\n");
    printf("1.Leer el archivo completo\n2.Agregar registro\n3.Leer Registro\n4.Reescribir en el archivo\n5.Salir\n");
    scanf("%d",&opcion);
        switch(opcion) {
            case 1: // Leer archivo completo
                archivo = fopen("datos.txt", "r");
                if (archivo == NULL) {
                    printf("Error al abrir el archivo\n");
                    break;
                }
                while (fgets(linea, sizeof(linea), archivo)) {
                    printf("Leído: %s", linea);
                }
                fclose(archivo);
                break;

            case 2: // Agregar registro con número de usuario
                archivo = fopen("datos.txt", "a");
                if (archivo == NULL) {
                    printf("Error al abrir el archivo\n");
                    break;
                }
                printf("Número de usuario: ");
                scanf("%d", &usuario);
                printf("Dime tu nombre: ");
                scanf("%s", nombre);
                printf("Cual es tu edad: ");
                scanf("%d", &edad);
                fprintf(archivo, "%d %s %d\n", usuario, nombre, edad);
                fclose(archivo);
                printf("Registro agregado correctamente.\n");
                break;

            case 3: // Leer registros (usuario, nombre y edad)
                archivo = fopen("datos.txt", "r");
                if (archivo == NULL) {
                    printf("Error al abrir el archivo\n");
                    break;
                }
                while (fscanf(archivo, "%d %s %d", &usuario, nombre, &edad) == 3) {
                    printf("Usuario: %d, Nombre: %s, Edad: %d\n", usuario, nombre, edad);
                }
                fclose(archivo);
                break;

            case 4: // Reescribir archivo
                archivo = fopen("datos.txt", "w");
                if (archivo == NULL) {
                    printf("Error al abrir el archivo\n");
                    break;
                }
                fprintf(archivo, "1 samara 18\n"); // ejemplo inicial
                fclose(archivo);
                printf("Archivo reescrito correctamente.\n");
                break;

            case 5: // Salir
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción inválida, intenta de nuevo.\n");
        }
    } while(opcion != 5);

    return 0;
}
