def revStringSimple(sentence):
    """Membalik string menggunakan metode slicing

    Args:
        sentence ([String]): [Kalimat yang akan dibalik]

    Returns:
        [String]: [Kalimat yang sudah dibalik]
    """
    return sentence[::-1]

def revStringLoop(sentence):
    """Membalik string menggunakan list loop

    Args:
        sentence ([String]): [Kalimat yang akan dibalik]

    Returns:
        [String]: [Kalimat yang sudah dibalik]
    """
    
    sent2list = list(sentence)  # sentence ke list
    listLen = len(sent2list)    # Panjang dari list
    newSentence = ""            # tempat menampung hasil

    # Proses pembalikkan kata dengan loop decrement
    for i in range(listLen-1, -1 , -1):
        newSentence += sent2list[i]
    return newSentence

def revStringRec(sentence):
    """Membalikkan string menggunakan recurcion slicing

    Args:
        sentence ([String]): [Kalimat yang akan dibalik]

    Returns:
        [String]: [Kalimat yang sudah dibalik]
    """
    if sentence == "":
        return sentence
    else:
        return sentence[-1] + revStringRec(sentence[:-1])

kalimat = "Halo ini Alif"
print(revStringRec(kalimat))
