""" Membuat segitiga terbalik (custom?)

Output akan menjadi seperti ini
*************X      13
************X       12
**********X         10
*********X          9
*******X            7
**X                 2
*X                  1

range dari 13-6 dan 2-1, dengan angka 11 dan 8 dilompati

Alif

"""

from itertools import chain

listAngka = chain(range(13, 6, -1), range(2, 0, -1))        # Range angka 13-6 dan 2-0 decrement
# listAngka = range(13, 0, -1)

for i in listAngka:                         # Itrasi range angka decrement
    if i == 11 or i == 8:                   # Angka ke 11 dan 8 tidak termasuk
        continue
    else:
        for j in range(0, i+1):             # Proses pembuatan segitiga siku-siku seperti di latihan 1
            if j != i:
                print("*", end = "")
            else:
                print("X")