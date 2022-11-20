m1 = float(input("Ingrese el valor de masa 1 (gramos) -> "))
m2 = float(input("Ingrese el valor de masa 2 (gramos) -> "))
d = float(input("Ingrese el valor de distancia (centímetros) -> "))
g = 9.8
F = (g * m1 * m2) / pow(d, 2)
print("La fuerza de atracción expresada en dinas es igual a: ", F)
