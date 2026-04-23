#Nombre: Samara Mardueño Bernardino
#Codigo: 222727303
#Descripcion: Es una calculadora utilizando switch +,-,*,/ ademas se comprueba si el textopo ingresado son numeros
# Nombre: Samara Mardueño Bernardino
# Codigo: 222727303
# Descripcion: Calculadora básica con validación de entrada

try:
    num1 = float(input("Dime tu primer numero: "))
    print("Es numero\n")
except ValueError:
    print("Es texto")
    exit()

signo = input("Que operacion quieres realizar (coloca el signo + - * /): ")

try:
    num2 = float(input("Dime tu segundo numero: "))
    print("Es numero\n")
except ValueError:
    print("Es texto")
    exit()

if signo == '+':
    print(f"La suma de tus numeros es: {num1 + num2:.2f}")
elif signo == '-':
    print(f"La resta de tus numeros es: {num1 - num2:.2f}")
elif signo == '*':
    print(f"La multiplicacion de tus numeros es: {num1 * num2:.2f}")
elif signo == '/':
    if num2 == 0:
        print("La division no puede ser realizada (divisor = 0)")
    else:
        print(f"La division de tus numeros es: {num1 / num2:.2f}")
else:
    print("No es valido")

print("Gracias por utilizar mi programa")