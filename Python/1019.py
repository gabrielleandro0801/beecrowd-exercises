total = int(input())

horas = int(total/3600)
total = int(total % 3600)

minutos = int(total/60)
total = int(total % 60)

segundos = total

print('{}:{}:{}' .format(horas, minutos, segundos))