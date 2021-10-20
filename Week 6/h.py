"""
    * Menggunakan library typing
    ! typing    -> Library untuk membuat standar notasi
    ! Counter   -> Notasi counter; Untuk melacak hitungan
"""

from typing import Counter

Counter = 0                             # Notasi standar untuk counter

while Counter<3:
    print("didalam perulangan")         # Print didalam loop
    Counter = Counter+1
else:
    print("bukan di dalam perulangan")  # Print diluar loop