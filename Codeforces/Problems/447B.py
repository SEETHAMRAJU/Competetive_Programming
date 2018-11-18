def calc(l,h):
    t = 0
    for i in range(0,len(l)):
        t = t + h[ord(l[i]) - 97] * (i+1)
    return t
x = raw_input()
n = input()
h = map(int,raw_input().split())
maxsofar = 0
for i in range(0,26):
    if(h[i] > h[maxsofar]):
        maxsofar = i
tot = calc(x,h)

for i in range(len(x)+1,len(x)+n+1):
    tot = tot + i*(h[maxsofar])
print tot
