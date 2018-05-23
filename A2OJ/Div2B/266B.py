def swap(l,i,j):
    temp = l[i]
    l[i] = l[j]
    l[j] = temp
    return l
n,t = map(int,raw_input().split())
x = raw_input()
l= [0]*n
for i in range(0,n):
    if(x[i] == 'B'):
        l[i] = 1


while(t>0):
    for i in range(1,n):
            if(l[i-1] > l[i]):
                swap(l,i,i-1)
    t -= 1

f = ""
for j in l:
    if(j == 0):
        f = f + "G"
    else:
        f = f + "B"

print f
