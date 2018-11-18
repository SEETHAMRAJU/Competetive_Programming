def ld(n):
    o = 0
    while(n>0):
        if(n%10 == 7 or n%10 == 4):
            o+=1
        n = n/10
    return o
n,m = map(int,raw_input().split())
c = 0
p = map(int,raw_input().split())
for i in p:
    if(m >= ld(i)):
        c += 1
print c

