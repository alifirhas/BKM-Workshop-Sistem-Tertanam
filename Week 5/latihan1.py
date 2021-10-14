"""
    Buat segitiga siku-siku
"""

for i in range(0, 10):              # Cetak baris
    for j in range(0, i+1):         # Cetak kolom sebanyak i
        if j != i:
            print("*", end = "")    # Print * jika i tidak sama dengan j
        else:
            print("X")              # Print X jika i sama dengan j
    # print(" ")