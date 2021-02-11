valor = int(input())
valorInicial = valor

notasCem = int(valor/100)
valor = int(valor % 100)

notasCinq = int(valor/50)
valor = int(valor % 50)

notasVinte = int(valor/20)
valor = int(valor % 20)

notasDez = int(valor/10)
valor = int(valor % 10)

notasCinco = int(valor/5)
valor = int(valor % 5)

notasDois = int(valor/2)
valor = int(valor % 2)

notasUm = valor

print('{}' .format(valorInicial))
print('{} nota(s) de R$ 100,00' .format(notasCem))
print('{} nota(s) de R$ 50,00' .format(notasCinq))
print('{} nota(s) de R$ 20,00' .format(notasVinte))
print('{} nota(s) de R$ 10,00' .format(notasDez))
print('{} nota(s) de R$ 5,00' .format(notasCinco))
print('{} nota(s) de R$ 2,00' .format(notasDois))
print('{} nota(s) de R$ 1,00' .format(notasUm))