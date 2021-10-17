"""
    Menghitung nilai kumulatif (SUM) dari mulai sampai batas angka yang ditentukan
    Resa
"""

i = 1               # Menandai looping keberapa
mulai = 5           # Angka awal dari sum
batas = 12          # Angka akhir dari sum
jmlAngka = 0        # Tempat jumlah akhir dari proses

while mulai <= batas:
    print('loop ke %d : %d + %d' %(i, jmlAngka, mulai))
    jmlAngka = jmlAngka + mulai
    i += 1
    mulai += 1

print ("total angka yang dijumlahkan : ", jmlAngka)
