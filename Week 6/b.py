"""
    * Menggunakan teknik **recursion function**
    ! recursion function -> fungsi yang memanggil dirinya sendiri
    https://stackoverflow.com/questions/52578602/how-does-a-python-recursive-function-works-for-tri-recursion-function
"""

def tri_recursion(num):
    """Fungsi sum menggunakan recursion

    Args:
        num (int): nilai yang akan proses

    Returns:
        [int]: hasil akhir dari recursion
    """

    # print(num, " ==== ")          # * Uncommend untuk melihat keseluruhan proses
    if(num>0):
        result = num + tri_recursion(num-1)     # ! Memanggi dirinya sendiri
        # print(num, " --- ")       # * Uncommend untuk melihat keseluruhan proses
        print(result)
    else:
        result=0                    # Base case
    return result

print("\n\nRexursion Example Results")
tri_recursion(6)
