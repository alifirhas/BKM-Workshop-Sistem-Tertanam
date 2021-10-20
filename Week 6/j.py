"""
    * Membuat tampilan visual / GUI degan matplotlib dan numpy
    * Menggunakan ektrenal library
    ! Untuk menjalankan ini diharuskan adanya
    - pip           -> python library manager
    - matplotlib    -> library untuk membuat visualisasi statis, animasi, dan interaktif dengan Python.
    - numpy         -> library untuk membuat scientify array
"""

import numpy as np
import matplotlib.pyplot as plt

x = np.array([80, 85, 90, 95, 100, 105, 110, 115, 120, 125])
y = np.array([240, 250, 260, 270, 280, 290, 300, 310, 320, 330])

# Membuat line chart
plt.plot(x,y)                           # Set nilai garis x dan y
plt.xlabel("rata rata sinyal")          # Label untuk garis x
plt.ylabel("kalori yang dihabiskan")    # Label untuk garis y
plt.show()                              # Tampilkan hasil