def tri_recursion(k):
    # print(k, " ==== ")
    if(k>0):
        result = k + tri_recursion(k-2)
        # print(k, " --- ")
        print(result)
    else:
        result=0
    return result

print("\n\nRexursion Example Results")
tri_recursion(8)