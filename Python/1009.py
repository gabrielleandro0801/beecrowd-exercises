nome = input()
salario = float(input())
totalVendas = float(input())

recebido = salario + (totalVendas * 0.15)

print('TOTAL = R$ {:.2f}' .format(recebido))