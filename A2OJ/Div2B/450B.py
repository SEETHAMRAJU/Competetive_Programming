M = 1000000007
def matrixm(a,b):
    c = []
    i = 0
    while(i < len(a)):
        j = 0
        x = []
        while(j < len(b[0])):
            x.append(0)
            j += 1
        i += 1
        c.append(x)
    i = 0
    while(i  <len(a)):
        j = 0
        while(j < len(b[0])):
            k = 0
            while(k < len(a[0])):
                c[i][j] += a[i][k] * b[k][j]
                c[i][j] = c[i][j]%M
                k+=1
            j += 1
        i += 1
    return c 
def power(x,n):
    y = [[1,0],[0,1]]
    while(n > 0):
        if(n%2 != 0):
            y = matrixm(y,x)
        x = matrixm(x,x)
        n = n/2
    return y
a,b = map(int,raw_input().split())
n = input()
x = [[1,-1],[1,0]]
ans = power(x,max(0,n-2))
ans = matrixm(ans,[[b-a],[b],[a]])
if(n <3):
    if(n==1):
        print a%M
        exit()
    else:
        print b%M
        exit()
print ans[1][0]
