A = int(input())
B = int(input())
C = int(input())
D = int(input())

qtd = A

resposta = 'N'
n = 0


while n * D <= C:
    leite = C - n * D
    if A <= leite <= B:
        resposta = 'S'
        break
    n += 1

print(resposta)