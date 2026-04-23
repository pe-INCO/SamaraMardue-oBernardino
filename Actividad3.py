#Nombre: Samara Mardueño Bernardino
#Codigo:222727303
#Descripcion: Este programa hace comparaciones de 3 numeros ingresados por el usuario el primer número con el segundo, el primer número con el tercero y el segundo número con el tercero

num1=int(input("Dime tu primer numero "))
num2 = int(input("Dime tu segundo numero "))
num3= int(input("Dime tu tercer numero "))

if(num1 > num2):
     print("Tu numero",num1,"es mayor a",num2)
elif (num2 > num1):
     print("Tu numero",num2," es mayor a",num1)
else:
     print("Tu numeros son iguales\n")
     
if(num1 > num3):
     print("Tu numero",num1,"es mayor a",num3)
elif (num3 > num1):
     print("Tu numero",num3," es mayor a",num1)
else:
     print("Tu numeros son iguales\n")
     
if(num2 > num3):
     print("Tu numero",num2,"es mayor a",num3)
elif (num3 > num2):
     print("Tu numero",num3," es mayor a",num2)
else:
     print("Tu numeros son iguales\n")