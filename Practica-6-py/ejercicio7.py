a = float(input("Ingrese el valor de a -> "))
b = float(input("Ingrese el valor de b -> "))
c = float(input("Ingrese el valor de c -> "))
d = float(input("Ingrese el valor de d -> "))
e = float(input("Ingrese el valor de e -> "))
f = float(input("Ingrese el valor de f -> "))

x = (c * e - b * f) / (a * e - b * d)
y = (a * f - c * d) / (a * e - b * d)

print("El valor de x es: ", x)
print("El valor de y es: ", y)
