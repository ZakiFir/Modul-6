asli = input()
palsu = input()
kode = len(asli)
pesan = len(palsu)
x = 0
y = 0
if len(asli) != len(palsu):
    print('Panjang kalimat berbeda, pesan palsu')
else:
    for i in range(len(asli)):
        if asli[i] == palsu[i]:
            print('*', end='')
            x+=1
        else:
            print('#', end='') 
            y+=1
    print('\n* = {}' .format(x))
    print('# = {}' .format(y))
    if x >= y:
        print('Pesan Asli')
    elif x < y:
        print('Pesan Palsu')