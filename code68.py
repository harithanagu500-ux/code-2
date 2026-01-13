rows = int(input("enter anumber of rows: "))
for i in range(1,rows+1):
    for space in range(1,rows-i+1):
        print(end=' ')
    for star in range(1,i+1):
        print("*",end='')
    print('')
for k in range(rows-1,rows+1,1):
    for l in range(1,k+1):
        print("*",end='')
    print()

