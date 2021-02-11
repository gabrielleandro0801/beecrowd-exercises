a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)

if (a < b+c) and (b < a+c) and (c < a+b):
    resposta = a + b + c
    print('Perimetro = {:.1f}' .format(resposta))
else:
    resposta = ((a+b)*c)/2
    print('Area = {:.1f}' .format(resposta))