//Nombre: Samara Mardueño Bernardino
//Codigo: 222727303

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crearArchivo() {
    FILE *archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir archivo\n");
        return;
    }
    fprintf(archivo, "Luis, 21\n");
    fprintf(archivo, "Ana, 23\n");
    fprintf(archivo, "Carlos, 20\n");
    fclose(archivo);
    printf("Archivo creado con registros iniciales.\n");
}

void leerArchivo() {
    FILE *archivo = fopen("datos.txt", "r");
    char buffer[100];
    if (archivo == NULL) {
        printf("No existe archivo para leer.\n");
        return;
    }
    printf("Contenido del archivo:\n");
    while (fgets(buffer, sizeof(buffer), archivo) != NULL) {
        printf("%s", buffer);
    }
    fclose(archivo);
}

void actualizarRegistro(const char *clave, const char *nuevoRegistro) {
    FILE *original = fopen("datos.txt", "r");
    FILE *temporal = fopen("temp.txt", "w");
    char buffer[100];

    if (original == NULL || temporal == NULL) {
        printf("Error al abrir archivos.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), original) != NULL) {
        if (strstr(buffer, clave) != NULL) {
            fprintf(temporal, "%s\n", nuevoRegistro); 
        } else {
            fputs(buffer, temporal);
        }
    }

    fclose(original);
    fclose(temporal);
    remove("datos.txt");
    rename("temp.txt", "datos.txt");
    printf("Registro actualizado.\n");
}

void borrarRegistro(const char *clave) {
    FILE *original = fopen("datos.txt", "r");
    FILE *temporal = fopen("temp.txt", "w");
    char buffer[100];

    if (original == NULL || temporal == NULL) {
        printf("Error al abrir archivos.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), original) != NULL) {
        if (strstr(buffer, clave) == NULL) {
            fputs(buffer, temporal); // copia todo menos el registro a borrar
        }
    }

    fclose(original);
    fclose(temporal);
    remove("datos.txt");
    rename("temp.txt", "datos.txt");
    printf("Registro borrado.\n");
}

int main() {
    int opcion;
    char clave[50], nuevoRegistro[100];

    do {
        printf("\nMenu CRUD:\n");
        printf("1) Crear archivo\n");
        printf("2) Leer archivo\n");
        printf("3) Actualizar registro\n");
        printf("4) Borrar registro\n");
        printf("5) Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        getchar(); // limpiar buffer

        switch(opcion) {
            case 1:
                crearArchivo();
                break;
            case 2:
                leerArchivo();
                break;
            case 3:
                printf("Registro a actualizar (ejemplo: Luis): ");
                fgets(clave, sizeof(clave), stdin);
                clave[strcspn(clave, "\n")] = 0; // quitar salto
                printf("Nuevo registro (ejemplo: Luis, 25): ");
                fgets(nuevoRegistro, sizeof(nuevoRegistro), stdin);
                nuevoRegistro[strcspn(nuevoRegistro, "\n")] = 0;
                actualizarRegistro(clave, nuevoRegistro);
                break;
            case 4:
                printf("Registro a borrar (ejemplo: Ana): ");
                fgets(clave, sizeof(clave), stdin);
                clave[strcspn(clave, "\n")] = 0;
                borrarRegistro(clave);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
        }
    } while(opcion != 5);  
    
    getch();
    return 0;
}
