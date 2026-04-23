#Nombre:Samara Mardueño Bernardino 
#Codigo:222727303 
#Descripcion: Este programa se encarga de verificar si es numero o letra si es positivo negativo o 0
#si es decimal o entero si es positivo o negativo y si esta en el rango
# Nombre: Samara Mardueño Bernardino
# Código: 222727303
# Descripción: Este programa verifica si la entrada es número o letra,
# si es positivo, negativo o cero, si es decimal o entero,
# y si está dentro de un rango válido.

def main():
    try:
        entrada = input("Ingresa el número: ")
        numero = float(entrada)   # Intentamos convertir a número
        print("Es un número")

        # Verificar si es positivo, negativo o cero
        if numero > 0:
            print("Tu número es positivo")
        elif numero < 0:
            print("Tu número es negativo")
        else:
            print("Tu número es 0")

        # Verificar si es entero o decimal
        if numero == int(numero):
            print("Tu número es entero")
        else:
            print("Tu número es decimal")

        # Verificar rango
        if 0 <= numero < 100:
            print("El número está en un rango válido (0-99)")
        else:
            print("Tu número no está en un rango válido")

    except ValueError:
        print("Es una letra o un valor no numérico")

if __name__ == "__main__":
    main()