def swap(l,i,j):
    temp = l[i]
    l[i] = l[j]
    l[j] = temp
    return l
n,t = map(int,raw_input().split())
x = raw_input()
l= [0]*n
i = 0
while(i<n):
    if(x[i] == 'B'):
        l[i] = 1
    i += 1

while(t>0):
    i = 1
    while(i<n):
            if(l[i-1] > l[i]):
                swap(l,i,i-1)
                i += 2
            else:
                i += 1
    t -= 1

f = ""
for j in l:
    if(j == 0):
        f = f + "G"
    else:
        f = f + "B"

print f
