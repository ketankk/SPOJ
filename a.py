def Factorial():
    n = input ('Enter the number to find factorial: ')
    fact=1
    for i in range(1,n+1):
       fact=fact*i
    print('Factorial of a number %d is %d'%(n,fact))
