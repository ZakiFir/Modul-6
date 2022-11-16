n = int(input())
MatriksA = []
print('Matriks A')
for i in range (n):
    k = list(map(int, input().split()))
    MatriksA.append(k)
MatriksB = []
print('Matriks B')
for i in range (n):
    k = list(map(int, input().split()))
    MatriksB.append(k)
MatriksAXB = []
print('Matriks AXB')
for i in range (n):
    MatriksAXB.append([])
    for j in range (n):
        x = 0
        for k in range (n):
            x = x + MatriksA[i][k] * MatriksB[k][j]
        MatriksAXB[i].append(x)
for baris in MatriksAXB:
    for k in baris:
        print(k, end=' ')
    print()