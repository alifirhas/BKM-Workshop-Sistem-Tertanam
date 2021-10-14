"""Tampilkan bilangan prima dari 1 - 30

Terdapat variable mulai untuk set angka awal
variable akhir untuk batas angka

"""
mulai = 1               # Hitung bilangan prima dari mulai
akhir = 30              # sampai akhir

for angka in range(mulai, akhir+1):             # Iterasi range angka mulai -> akhir
    if angka > 1:                               # Angka 1 bukan prima langsung dikeluarkan
        a=2
        while angka > a :
            if angka % a == 0:
            # if angka % a == 0 & a != angka:
                # print('')
                break
            a += 1
        else: # loop not exited via break
            print(angka, end = " ")
