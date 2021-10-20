"""
    * Menggunakan input function
"""

# Konversi nilai input ke integer
a = int(input('Masukkan bilangan ganjil lebih dari 50:'))

# Buat user harus terus melakukan input jika nilai input salah
while a%2 !=1 or a<=50:
    a = int(input('Salah, masukkan lagi: '))

# Print benar di akhir program
print('Benar')
