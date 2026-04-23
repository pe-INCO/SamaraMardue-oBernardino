#Nombre: Samara Mardueño Bernardino
#Codigo:222727303
#Descripcion: Este programa pide datos al usuario para medir su imc y dar un diagnostico en base a estos resultados en el programa se valida la edad el nombre peso altura


nombre = input("¿Cuál es tu nombre completo?: ").strip()

# Validar que solo tenga letras y espacios
esvalida = all(c.isalpha() or c.isspace() for c in nombre)

if not esvalida:
    print("Tu nombre no es válido")
else:
    print("Tu nombre es válido")

# Edad
edad = int(input("¿Cuál es tu edad?: "))
if edad > 1 and edad < 120:
    print("Tu edad es válida")
else:
    print("Tu edad es inválida")

# Peso
kilos = float(input("¿Cuál es tu peso en kg?: "))
if kilos > 20 and kilos < 300:
    print("Tu peso es válido")
else:
    print("Tu peso es inválido")

# Altura
altura = float(input("¿Cuál es tu estatura en cm?: "))
if altura.is_integer() and altura > 50 and altura < 250:
    print("Tu estatura es válida")
else:
    print("Tu estatura no es válida")

# Calcular IMC (convertir altura a metros)
imc = kilos / ((altura / 100) ** 2)

# Informe
print("\n==========================================")
print("     INFORME DE DIAGNÓSTICO IMC")
print("==========================================\n")
print(f"Paciente: {nombre}")
print(f"Edad: {edad} años")
print(f"Peso: {kilos:.2f} kg")
print(f"Altura: {altura/100:.2f} m\n")
print("RESULTADOS:\n")
print(f"IMC calculado: {imc:.2f}")

# Diagnóstico según IMC
if imc < 18.6:
    print(f"Diagnóstico: Tu IMC de {imc:.2f} se encuentra en el nivel de bajo peso")
elif imc < 25:
    print(f"Diagnóstico: Tu IMC de {imc:.2f} se encuentra en el peso normal")
elif imc < 30:
    print(f"Diagnóstico: Tu IMC de {imc:.2f} se encuentra en el nivel de sobrepeso")
elif imc < 35:
    print(f"Diagnóstico: Tu IMC de {imc:.2f} se encuentra en el nivel de obesidad tipo 1")
elif imc < 40:
    print(f"Diagnóstico: Tu IMC de {imc:.2f} se encuentra en el nivel de obesidad tipo 2")
else:
    print(f"Diagnóstico: Tu IMC de {imc:.2f} se encuentra en el nivel de obesidad tipo 3")

print("==========================================")

