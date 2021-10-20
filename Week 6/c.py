def tampilkanAngka(batas, i = 4):
    print(f'Perulangan ke {i}')
    if(i<batas):
        tampilkanAngka(batas, i+2)
        
tampilkanAngka(10)