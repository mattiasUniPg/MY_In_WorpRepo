def triangle(n):
    k = 2*n - 2
    for i in range(0, n):
        for j in range(0, k):
            print(end=" " )
        k = k - 1
        for j in range(0, i+1):
            print("* ", end="")
        print("\r")
num = int(input('Enter the vale on n:'))
triangle(num)
print("BUON FELICE NATALE A TE E ALLA FAMIGLIA!! E BUON ANNO NUOVO ")