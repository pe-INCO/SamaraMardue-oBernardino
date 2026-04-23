#include <stdio.h>
#define MAX 5



int main() {
    int arreglo[MAX];
    int frente = -1, fin = -1;   // Para fifo
    int cima = -1;               // Para lifo
    int opcion, sub, valor,i;


    printf("****Como quieres organizar el arreglo****\n\n");
    printf("  1. De la manera FIFO\n  2. De la manera LIFO\n\n  Que opcion quieres? ");
    scanf("%d", &opcion);
    system("cls");
    
    switch(opcion) {
        case 1: 
        
            do {
                printf("\n*** FIFO ***\n");
                printf("1. Encolar\n2. Desencolar\n3. Mostrar\n4. Salir\n\n");
                printf("Que opcion quieres realizar?\n");
                scanf("%d", &sub);
                
                
                if (sub == 1) {
                    if (fin == MAX - 1) {
                        printf("Cola llena\n");
                    } else {
                        if (frente == -1) frente = 0;
                        printf("Valor: ");
                        scanf("%d", &valor);
                        arreglo[++fin] = valor;
                        printf("Encolado: %d\n", valor);
                    }
                } else if (sub == 2) {
                    if (frente == -1 || frente > fin) {
                        printf("Cola vacia\n");
                    } else {
                        printf("Desencolado: %d\n", arreglo[frente]);
                        frente++;
                    }
                } else if (sub == 3) {
                    if (frente == -1 || frente > fin) {
                        printf("Cola vacia\n");
                    } else {
                        printf("Cola: ");
                        for ( i = frente; i <= fin; i++) {
                            printf("%d ", arreglo[i]);
                        }
                        printf("\n");
                    }
                }
            } while(sub != 4);
            break;

        case 2: 
            do {
 printf("\n*** LIFO ***\n");
                printf("1. Encolar\n2. Desencolar \n3. Mostrar\n4. Salir\n");
                scanf("%d", &sub);

                if (sub == 1) {
                    if (cima == MAX - 1) {
                        printf("Arreglo lleno\n");
                    } else {
                        printf("Valor: ");
                        scanf("%d", &valor);
                        arreglo[++cima] = valor;
                        printf("Push: %d\n", valor);
                    }
                } else if (sub == 2) {
                    if (cima == -1) {
                        printf("Arreglo vacio\n");
                    } else {
                        printf("Pop: %d\n", arreglo[cima]);
                        cima--;
                    }
                } else if (sub == 3) {
                    if (cima == -1) {
                        printf("Arreglo vacio\n");
                    } else {
                        printf("Pila: ");
                        for ( i = cima; i >= 0; i--) {
                                  printf("%d ", arreglo[i]);
                        }
                        printf("\n");
                    }
                }
            } while(sub != 4);
            break;
    }

    return 0;
}
