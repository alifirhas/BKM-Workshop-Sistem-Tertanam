"""
    Menghitung nilai kumulatif (SUM) dari mulai sampai batas angka yang ditentukan
"""

i = 1
mulai = 5
batas = 12
jmlAngka = 0

while mulai <= batas:
    print('loop ke %d : %d + %d' %(i, jmlAngka, mulai))
    jmlAngka = jmlAngka + mulai
    i += 1
    mulai += 1

print ("total angka yang dijumlahkan : ", jmlAngka)
