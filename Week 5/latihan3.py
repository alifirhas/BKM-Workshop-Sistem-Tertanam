"""Menghitung luas lingkaran

phi dari lingkaran akan menggunakan math

"""

import math         # Pakai library math

r = 7               # r : jari-jari / radius
phi = math.pi       # simpan phi agar mudah dibaca
luas = phi * r * r  # Hitung luas lingkaran

# Batasi nilai koma cuma 2 angka
phi = round(phi, 2)
luas = round(luas, 2)

# Print hasil
print ("Luas lingkaran adalah ", luas, " dengan jari-jari ", r, " dan phi", phi)