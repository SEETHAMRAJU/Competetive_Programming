def s(l):
    return sum(l)
n,m,k = map(int,raw_input().split())
x = map(int,raw_input().split())
x.sort()
for i in range(0,n+1):
    if(s(x[n-i:]) -i + k >= m):
        print i
        exit()
print "-1"
