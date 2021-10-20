def stringShortSimple(stringList):
    """Mengurutkan data dengan sorted()

    Args:
        stringList ([list]): [list kata]

    Returns:
        [list]: [kata terurut Z->A]
    """
    
    stringList = sorted(stringList, reverse=True)
    return stringList

def stringShortQuick(stringArray):
    """[Sorting menggunakan quick sort]

    Args:
        stringArray ([list/array]): [List kata]

    Returns:
        [list]: [List kata terurut Z->A]
    """

    less = []
    equal = []
    greater = []

    if len(stringArray) > 1:
        pivot = stringArray[0]
        for x in stringArray:
            if x > pivot:
                less.append(x)
            elif x == pivot:
                equal.append(x)
            elif x < pivot:
                greater.append(x)
        # Don't forget to return something!
        return stringShortQuick(less)+equal+stringShortQuick(greater)  # Just use the + operator to join lists
    # Note that you want equal ^^^^^ not pivot
    else:  # You need to handle the part at the end of the recursion - when you only have one element in your stringArray, just return the stringArray.
        return stringArray

stringList = ["Celana", "rok", "dasi", "tas", "kemeja", "berkerah"]
sortedList = stringShortQuick(stringList)

print(sortedList)