def check(cor,i):
    for j in cor:
        if(cor[0] <= i or cor[1]>= i):
            return False        
    return True

n,m = map(int,raw_input().split())
cor = []
for i in range(0,n):
    l,r = map(int,raw_input().split())
    cor.append([l,r])
cor.sort()
ans = []
for j in range(1,m+1):
    if(check(cor,j)):
        ans.append(j)
print len(ans)
for j in ans:
    print j,
