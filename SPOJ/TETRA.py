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
    y = [[1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1]]
    n = max(0,n)
    while(n > 0):
        if(n%2 != 0):
            y = matrixm(y,x)
        x = matrixm(x,x)
        n = n/2
    return y
def mod100(x):
    for i in x:
        for j in i:
            j = j % 100
    return x
def generate_random():
    for i in range(0,10**5):
        j = randint(0,9)
        l.append(j)
    return l
######################################################################################
t = input()
answer = []
while(t>0):
    n,m = map(int,raw_input().split())
    Mat = [[1,1,1,1],[1,0,0,0],[0,1,0,0],[0,0,1,0]]  
    ans = power(Mat,n-2)
    ans1 = matrixm(ans,[[1],[0],[0],[0]])
    p = max(0,ans1[0][0] - 2)
    ans = power(Mat,m-1)
    ans2 = matrixm(ans,ans1)      
    q = max(0,ans2[0][0] - 2) 
    answer.append((q-p)%M)
    t -= 1
for j in answer:
    print j

