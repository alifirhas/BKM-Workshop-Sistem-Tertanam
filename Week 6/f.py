"""
    * Mencari kata yang sama pada list
    * Menggunakan string formatting -> lower() untuk merubah string ke lower case
"""

listsensor = ['Jarak','Suhu','Sudut','Kecepatan','Percepatan','Hujan','Api','Kelembapan']
sensorYangDicari = input('Masukkan nama sensor yang dicari: ')

i=0

while i<len(listsensor):
    if listsensor[i].lower()==sensorYangDicari.lower(): # String to lower case
        print('Ketemu di index',i)                      # Print index sensor jika ketemu
        break                                           # Hentikan loop ketika sudah ketemu
    print('Bukan',listsensor[i])                        # Print sensor yang ada di index sebelumnya 
    i+=1                                                
else:
    print('Maaf, sensor yang dicari tidak ditemukan')   # Print jika sensor tidak ditemukan
