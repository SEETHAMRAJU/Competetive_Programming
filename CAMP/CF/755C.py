def dfs(s,c,d):
    c[s] = 1
    for i in d[s]:
        if(c[i] == 0):
            dfs(i,c,d)
n = input()
d = {}
for i in range(0,n+1):
    d[i] = []
x = map(int,raw_input().split())
j = 1
for i in x:
    d[i].append(j)
    d[j].append(i)
    j += 1
for i in range(0,n+1):
    d[i] = list(set(d[i]))
#print d
c = [0]*(n+1)
count =0
while(sum(c) != n):
    j = 1
    for i in range(1,n+1):
        if(c[i] == 0):
            break;
        j += 1
    dfs(j,c,d)
    count += 1
print count

