#Nombre: Samara Mardueño Bernardino
#Codigo: 222727303
#Descripcion: Seria de fibonacci en python con valoracion


try:
    repeticion = int(input("Dime cuantas veces quieres hacerlo: "))
    
    a, b = 1, 0  # Valores iniciales
    for i in range(repeticion):
        print(f"El número de fibonacci es: {b}")
        c = a + b
        a, b = b, c

except ValueError:
    print("No es número")