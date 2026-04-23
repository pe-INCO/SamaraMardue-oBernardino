//Nombre:Samara Mardueño Bernardino
//Codigo:222727303
//Descripcion:Aplicando funciones 
                          
                          
#include<stdio.h>

float pi = 3.1416;

void mostrarMenu(void);
float areaCuadrado(float lado);
float areaRectangulo(float base, float altura);
float areaCirculo(float radio);
float areaTriangulo(float base, float altura);
float validarPositivo(float numero);


int main(){

    int caso;
    float opcion,lado,base,altura,radio,area,numero,veri,fica;
    
  
 do{
          
    mostrarMenu();
    printf("Que es lo que quieres hacer hoy?: \n");
    caso = (int) validarPositivo(opcion);
 do{
    if (caso > 6){
            printf("Esa opcion no es valida\n");
            
    }else{
         break;
    }  
}while(caso<6);
   
    switch(caso){
                   case 1:
                        system("cls");
                        
                        printf("Cual es el lado de tu cuadrado: \n");
                        
                        veri = validarPositivo(lado); //Funciones llamadas
                        area = areaCuadrado(veri); //Funciones llamadas
                        
                        printf("El area del cuadrado es: %.2f\n",area);
                      
                        break;
                        system("pause");
                   case 2:
                        
                        system("cls");
                        
                        printf("Cual es la base de tu rectangulo: \n");
                         
                        veri = validarPositivo(base); //Funciones llamadas
                        
                        printf("Cual es la altura de tu rectangulo: \n");
                        
                        fica = validarPositivo(altura); //Funciones llamadas
                        area = areaRectangulo(veri, fica); //Funciones llamadas
                        
                        printf("El area del cuadrado es: %.2f\n",area);
                        break;
                        
                   case 3:
                        system("cls");
                        printf("Cual es la radio de tu circulo: \n");
                        
                        veri = validarPositivo(radio);//Funciones llamadas
                        area = areaCirculo(veri); //Funciones llamadas

                        printf("El area del cuadrado es: %.2f\n",area);
                        break;
                        
                   case 4:
                        system("cls");
                        
                        printf("Cual es la base de tu triangulo: \n");
                       
                        veri = validarPositivo(base); //Funciones llamadas
                        
                        printf("Cual es la altura de tu triangulo: \n");
                        
                        fica = validarPositivo(altura); //Funciones llamadas
                        area = areaTriangulo(veri,fica); //Funciones llamadas
                        
                        printf("El area del cuadrado es: %.2f\n",area);
                        break;
                        
                        
                   case 5:
                        system("cls");
                        printf("Gracias por utilizar este programa :)\n");
                        opcion = 5;
                   
                   
                   }
    }while(opcion != 5);

   
    getch();
    return 0;
    }

//Funcion menu
void mostrarMenu(void){
    int opcion;
    printf("=======================Menu===================\n");
    
    printf(" 1. Area cuadrado \n 2. Area rectangulo \n 3. Area circulo \n 4. Area triangulo \n 5. Salir \n");
    printf("==============================================\n"); 
     
     }
    
//Funcion Area Cuadrado
float areaCuadrado(float lado){
      float area;
      area = lado * lado;
      return(area);
}

//Funcion Area Rectangulo
float areaRectangulo(float base, float altura){
      float area;
      area = base * altura;
      return(area);
      
}

//funcion Area del circulo
float areaCirculo(float radio){
      float area;
      area = pi * (radio * radio);
      return(area);
      }
      
//Funcion Area del Triangulo
float areaTriangulo(float base, float altura){
      float area;
      area = (base * altura) / 2;
      return(area);
      }

//Funcion validar numero
float validarPositivo(float numero){
      int i=0,c;
      float numeron;
      
  while(1){
           
    if(scanf("%f",&numero)==1){
  
     do{
         if(numero > 0){
                 
         
             return(numero);
             i=1; 
        
      }else{
            
         printf("El numero no es valido tiene que ser positivo introducelo de nuevo: "); 
         while ((c = getchar()) != '\n' && c != EOF) { } //Esto lo uso para limpiar el bufer
      }
      
    }while(i!=0);
    
    
    }else{
       printf("Solo se aceptan numeros\n"); 
       while ((c = getchar()) != '\n' && c != EOF) { } //Esto lo uso para limpiar el bufer
    }
    }
      
  
    
}


    
    
