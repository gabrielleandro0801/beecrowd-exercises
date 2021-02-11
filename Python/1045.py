a, b, c = input().split()

a = float(a)
b = float(b)
c = float(c)

if a < b:
    caixa = a
    a = b
    b = caixa

if a < c:
    caixa = a
    a = c
    c = caixa

if b < c:
    caixa = b
    b = c
    c = caixa

if (a >= (b+c)):
    print('NAO FORMA TRIANGULO')
else:
    if (a*a) == (b*b + c*c):
        print('TRIANGULO RETANGULO')
    elif (a*a) > (b*b + c*c):
        print('TRIANGULO OBTUSANGULO')
    elif (a*a) < (b*b + c*c): 
        print('TRIANGULO ACUTANGULO')

if a == b and b == c:
    print('TRIANGULO EQUILATERO')
elif a == b or b == c:
    print('TRIANGULO ISOSCELES')