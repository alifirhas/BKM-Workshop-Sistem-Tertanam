"""
    Menggunakan segitiga sama sisi
"""

for i in range(0, 10):          # Nyetak baris baru
    for j in range(0, i+1):     # Nyetak karakter/tulisannya
        if j != i:
            print("n", end = " ")
        else:
            print("x")
    print(" ")
