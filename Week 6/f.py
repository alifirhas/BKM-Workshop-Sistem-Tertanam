listsensor = ['Jarak','Suhu','Sudut','Kecepatan','Percepatan','Hujan','Api','Kelembapan']
sensorYangDicari = input('Masukkan nama sensor yang dicari: ')
i=0
while i<len(listsensor):
    if listsensor[i].lower()==sensorYangDicari.lower():
        print('Ketemu di index',i)
        break
    print('Bukan',listsensor[i])
    i+=1
else:
    print('Maaf, sensor yang dicari tidak ditemukan')