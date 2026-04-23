/*
Nombre: Samara Mardueño Bernardino
Codigo: 222727303
Descripcion: Conceptos basicos
--Paradigma de programacion:Distintas formas de pensar o resolver problemas
Programacion estructurada - Secuencia, seleccion, repetición y moduladidad(funciones)
--sistema experto:Escomo hablar con la computadora utilizando if o else 
*/

#include<stdio.h>
int main(){
    int materia1;
    int materia2;
    int materia3;
    int promedio;
    
  printf("Cual es tu primera calificacion ");
  scanf("%d",&materia1);
  
  printf("Cual es tu segunda calificacion ");
  scanf("%d",&materia2);
  
  printf("Cual es tu Tercera calificacion ");
  scanf("%d",&materia3);
  promedio = (materia1 + materia2 + materia3) /3;
  printf("Tu promedio es %d",promedio);
  getch();
  return 0;
}
