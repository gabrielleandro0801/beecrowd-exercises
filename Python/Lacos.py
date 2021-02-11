# ---------- FOR ----------
print('---------- FOR ----------')
laco = []
for i in range(0, 5):
    laco.append(int(input('Digite: ')))

for i in range(0, 5):
    print("Posicao {} do vetor: {}" .format(i, laco[i]))

# ---------- WHILE ----------  
print('\n---------- WHILE ----------')
laco2 = []
contador = 0
while(contador < 5):
    laco2.append(int(input("Digite: ")))
    contador += 1

contador = 0
while(contador < 5):
    print('Posicao {} do vetor: {}' .format(contador, laco2[contador]))
    contador += 1

# ---------- WHILE-ELSE ---------- 
print('\n---------- WHILE-ELSE ----------')
laco3 = []
caixa = 0
while(caixa < 5):
    laco3.append(int(input("Digite: ")))
    caixa += 1
else:
    print('Vetor preenchido\n')

caixa = 0
while(caixa < 5):
    print('Posicao {} do vetor: {}' .format(caixa, laco3[caixa]))
    caixa += 1
else:
    print('Fim do vetor\n')