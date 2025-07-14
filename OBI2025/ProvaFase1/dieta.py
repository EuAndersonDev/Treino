N, M = map(int, input().split())

final = 0

for i in range(N):
    linha = list(map(int, input().split()))
    resultado = (linha[0]*4)+(linha[1]*9)+(linha[2]*4)
    final += resultado

result = M - final

print(result)    
    
