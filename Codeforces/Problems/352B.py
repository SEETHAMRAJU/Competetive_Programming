def calc(a,d,n):
    return ((2*a + (n-1)*d)*n)/2
n = input()
x = map(int,raw_input().split())
d = {}
for i in range(1,max(x)+1):
    d[i] = []

for i in range(0,n):
    d[x[i]].append(i)
x = set(x)
answer = []
for i in x:
    l = d[i]
    if(len(l) == 1):
        answer.append([i,0])
    else:
        s = reduce(lambda x,y :x+y,l)
        if(s == calc(l[0],l[1]-l[0],len(l))):
            answer.append([i,l[1]-l[0]])
answer.sort()
print len(answer)
for j in answer:
    print j[0],j[1]
