"""
    * Loop menggunakan **recursion function**
    * Menggunakan default value di function
"""

def tampilkanAngka(batas, i = 4):
    """Menampilkan angka mulai dari 4 (optional) sampai batas

    Args:
        batas ([int]): batas loop terjadi
        i (int, optional): [description]. Defaults to 4.
    """
    print(f'Perulangan ke {i}')
    
    if(i<batas):                    # Base case
        tampilkanAngka(batas, i+2)
        
tampilkanAngka(10)
