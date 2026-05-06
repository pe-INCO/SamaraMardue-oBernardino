// lectura y escritura con menú
#include <stdio.h>

int main() {
    FILE *archivo;
    char linea[100];
    char nombre[50];
    int edad;
    int c, opcion; 
    
    do {
        printf("\n=============== MENU ===============\n");
        printf("1. Escritura \n");
        printf("2. Lectura \n");
        printf("3. Lectura \n");
        printf("4. Lectura \n");
        printf("5. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);  

        switch(opcion) {
            case 1: // Escritura
                archivo = fopen("datos.txt", "w");
                if (archivo == NULL) {
                    printf("Error: No se pudo abrir el archivo\n");
                    break;
                }
                fprintf(archivo, "samara 18\n");
                fprintf(archivo, "luis 25\n");
                fputc('X', archivo);
                fputc('\n', archivo);
                fclose(archivo);
                printf("Archivo escrito correctamente.\n");
                break;

            case 2: // Lectura con fscanf
                archivo = fopen("datos.txt", "r");
                if (archivo == NULL) {
                    printf("Error: No se pudo abrir el archivo\n");
                    break;
                }
                while (fscanf(archivo, "%s %d", nombre, &edad) == 2) {
                    printf("Nombre: %s, Edad: %d\n", nombre, edad);
                }
                fclose(archivo);
                break;

            case 3: // Lectura con fgets
                archivo = fopen("datos.txt", "r");
                if (archivo == NULL) {
                    printf("Error: No se pudo abrir el archivo\n");
                    break;
                }
                while (fgets(linea, sizeof(linea), archivo) != NULL) {
                    printf("%s", linea);
                }
                fclose(archivo);
                break;

            case 4: // Lectura con fgetc
                archivo = fopen("datos.txt", "r");
                if (archivo == NULL) {
                    printf("Error: No se pudo abrir el archivo\n");
                    break;
                }
                while ((c = fgetc(archivo)) != EOF) {
                    putchar(c);
                }
                fclose(archivo);
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
