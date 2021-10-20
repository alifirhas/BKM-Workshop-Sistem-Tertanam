"""
    * Membuat tampilan visual / GUI degan matplotlib dan numpy
    * Menggunakan ekstrenal library
    ! Untuk menjalankan ini diharuskan adanya
    - pip           -> python library manager
    - matplotlib    -> library untuk membuat visualisasi statis, animasi, dan interaktif dengan Python.
    - numpy         -> library untuk membuat scientify array
"""

from matplotlib import pyplot as plt
import numpy as np

x = np.array(["A", "B", "C", "D"])  # Label dari data
y = np.array([13, 8, 11, 20])       # Nilai dari data sesuai urut index

plt.bar(x,y)            # Membuat bar chart dengan matplotlib
plt.show()              # Menampilkan hasil
