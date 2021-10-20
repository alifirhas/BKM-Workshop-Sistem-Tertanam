"""
    * Menggunakan tipe data/class list
"""

listSensor=[
    'Sensor Jarak', 
    'Sensor Suhu', 
    'Sensor Kelembapan', 
    'Sensor Api', 
    'Sensor suhu', 
    'Sensor Sudut', 
    'Sensor Kecepatan', 
    'Sensor Percepatan',
]

i=0                         # Start awal loop
while i < len(listSensor):  # len() mengambil jumlah data
    print(listSensor[i])
    i += 1                  # Tambah nilai start agar bisa berhenti
    