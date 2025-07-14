Escola = int(input())
Super = int(input())
Loja = int(input())

lista = [Escola, Super, Loja]

lista.sort(reverse=True)

resultado = (lista[0]-lista[1]) + (lista[1]-lista[2]) + (lista[0] - lista[2])

print(resultado)
