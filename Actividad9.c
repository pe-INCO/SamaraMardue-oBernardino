/*
Nombre:Samara Mardueño Bernardino
Codigo:222727303
Desctripcion:
             */
#include<stdio.h>
#include<stdlib.h>
 int main(){
     
     
     int i=0,j=0,n=0,opcion1,opcion,reinicio;
     float cal=0,aprovados=0,reprobados=0,sumat=0,sumaa=0,sumar=0;
     do{
     printf("===========Bienvenido al Menu=============\n");
     printf("1: Ingresar calificaciones\n2: Ver estadísticas\n3: Reiniciar datos\n4: Salir\n");
     printf("Que es lo que quiere hacer hoy");
     scanf("%d",&opcion1);
     
     switch(opcion1){
                     case 1:
                          system("cls");
                          while(i == 0){
                            
                            printf("Dime la calificacion de la materia\n");
                            scanf("%f",&cal);
                            while(cal < 0 || cal > 100){
                                      printf("No es un numero valido intentalo otra vez");
                                      scanf("%f",&cal);
                                      }
                            j = 1+j;
                            printf("Quieres seguir ingresando cal? 1.Si 2.No\n");
                            scanf("%d",&opcion);
                            if(cal >= 60){
                                   aprovados = 1+ aprovados;
                                   
                                   sumat = sumat + cal;
                                   sumaa= sumaa + cal;
                            }else{
                                 reprobados = 1+ reprobados;
                                 sumat= sumat + cal;
                                 sumar = sumar + cal;
                            }
                             if(opcion == 2){
                              printf("Gracias por utilizar el programa\n");
                              i= 1;
                            }
                          }
                          break;
                      case 2:
                           system("cls");
                           printf("El total de calificaciones ingresadas son: %d\n",j);
                           printf("El promedio general es: %.2f\n",sumat/j);
                           printf("Estudiantes aprovados: %.2f\n",aprovados);
                           printf("Estudiantes reprovados: %.2f\n",reprobados);
                           printf("Promedio de estudiantes aprovados: %.2f\n",sumaa/aprovados);
                           printf("Promedio de estudiantes reprovados: %.2f\n",sumar/reprobados);
                           break;
                           
                      case 3:
                           system("cls");
                           printf("Tus datos seran reiniciados estas seguro 1. si 2. no\n");
                           scanf("%d",&reinicio);
                           if(reinicio == 1){
                             i=0;
                             j=0;
                             n=0;
                             opcion1=0;
                             opcion=0;
                             reinicio=0;
                             cal= 0;
                             aprovados=0;
                             reprobados=0;
                             sumat=0;
                             sumaa=0;
                             sumar=0;
                           }else{
                                        printf("Tus datos siguen intactos");
                           }
                           break;
                      case 4:
                           system("cls");
                           printf("Gracias por utilizar nnuestro programa");
                           opcion= 4;
                           break;
                     
     }
     }while(opcion != 4);
     
    
     getch();
     return 0;
 }
