def c(x):
    return max(ord(x)-97, ord(x)-65)
def solve(l,n):
    c = [0]*26
    for i in range(0,n):
        c[c(l[i])] += 1
    if()
    for i in range(n,len(l))
ans = []
while(1):
    n = input()
    if(n == 0):
        break
    x =raw_input()
    p = solve(x,n)
    ans.append(p)
for i in ans:
    print i
