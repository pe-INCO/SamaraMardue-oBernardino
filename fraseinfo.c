//Nombre:Samara
//Codigo: 222727303
//Descripcion:
              
#include<stdio.h>
#include<ctype.h>

char cadena[200];
char mayusculas[200];
char minusculas[200];
char reemplazo[200];

int main(){
    
    int i=0,n=0,tamano,x,a;
    char mayuscula,minuscula,remplazo;
    
    printf("Que frase quieres esplorar: ");
    fgets(cadena,200 ,stdin);
    cadena[strcspn(cadena, "\n")] = '\0';
    
//   La longitud de la cadena.

     tamano = strlen(cadena);
     printf("La longitud de la cadena es de %d\n",tamano);

//   Los primeros 3 caracteres.
     printf("Los primeros caracteres son: ");  
     for(i;i<3;i++){
           
          printf("%c - ",cadena[i]);       
                 
     }
//   Los últimos 3 caracteres.
    x = tamano - 3;
    printf("\nLos ultimos caracteres son: ");
    
     for( n = tamano-1; n>=n-3 && n >= x; n--){
         
          printf("%c -",cadena[n]);       
                 
     }
//   La cadena en mayúsculas.
     for (i = 0; i < tamano; i++) {
        mayusculas[i] = toupper(cadena[i]);
     }
     mayusculas[tamano] = '\0'; // cerrar cadena
     printf("\nCadena en MAYUSCULAS: %s", mayusculas);
     
//   La cadena en minúsculas.

     for (i = 0; i < tamano; i++) {
        minusculas[i] = tolower(cadena[i]);
     }
      minusculas[tamano] = '\0'; // cerrar cadena
      printf("\nCadena en minusculas: %s", minusculas);
//   Reemplazar todas las vocales a por @.
    
     strcpy(reemplazo, cadena);
     
     for (i = 0; i < tamano; i++) {
        char c = tolower(reemplazo[i]); // convertir a minúscula para comparar
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            reemplazo[i] = '@';
        }
    }
    printf("\nLa cadena es: %s ",reemplazo);
    getch();
    return 0;
    }
