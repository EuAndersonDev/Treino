N = int(input())
popularidade = [int(x) for x in input().split()]

N = len(popularidade)
H = max(popularidade)


for linha in range(H):
    for i in range(N):
        if linha < H - popularidade[i]:
            print(0, end=' ')
        else:
            print(1, end=' ')
    print()

    