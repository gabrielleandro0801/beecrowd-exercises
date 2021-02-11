total = int(input())

anos = int(total / 365)
total = int(total % 365)

meses = int(total / 30)
total = int(total % 30)

dias = total

print('{} ano(s)' .format(anos))
print('{} mes(es)' .format(meses))
print('{} dia(s)' .format(dias))