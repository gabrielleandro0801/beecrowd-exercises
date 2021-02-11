peca1, quantidade1, valor1 = input().split()
peca1 = int(peca1)
quantidade1 = int(quantidade1)
valor1 = float(valor1) 

peca2, quantidade2, valor2 = input().split()
peca2 = int(peca2)
quantidade2 = int(quantidade2)
valor2 = float(valor2) 

totalPagar = (quantidade1 * valor1) + (quantidade2 * valor2)

print('VALOR A PAGAR: R$ {:.2f}' .format(totalPagar))