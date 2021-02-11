v1, v2, v3 = input().split()

v1 = float(v1)
v2 = float(v2)
v3 = float(v3)

triangulo = (v1 * v3)/2
circulo = 3.14159 * pow(v3, 2)
trapezio = ((v1 + v2) * v3)/2
quadrado = pow(v2, 2)
retangulo = v1 * v2

print('TRIANGULO: {:.3f}' .format(triangulo))
print('CIRCULO: {:.3f}' .format(circulo))
print('TRAPEZIO: {:.3f}' .format(trapezio))
print('QUADRADO: {:.3f}' .format(quadrado))
print('RETANGULO: {:.3f}' .format(retangulo))