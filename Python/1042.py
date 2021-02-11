a, b, c = input().split()

a = int(a)
b = int(b)
c = int(c)

if a>b and a>c and b>c: # a>b>c
    maior = a
    medio = b
    menor = c
elif a>b and a>c and c>b: # a>c>b 
    maior = a
    medio = c
    menor = b
elif b>a and b>c and a>c: # b>a>c 
    maior = b
    medio = a
    menor = c
elif b>c and b>a and c>a: # b>c>a 
    maior = b
    medio = c
    menor = a
elif c>a and c>b and a>b: # c>a>b 
    maior = c
    medio = a
    menor = b
else: # c>b>a 
    maior = c
    medio = b
    menor = a

print('{}\n{}\n{}\n\n{}\n{}\n{}' .format(menor, medio, maior, a, b, c))