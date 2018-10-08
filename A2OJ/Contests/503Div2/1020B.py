d = {}
def bfs(j,c):
    q= []
    q.append(j)
    c[j] = 2
    while(q!=[]):
        src = q.pop()
        c[src] = 1
        for i in d[src]:
            if(c[i] != 0):
                c[i] = 0
                return i
            else:
                c[i] = 2
                q.append(i)
    return -1
for i in range(1,1100):
    d[i] = []
n = input()
p = map(int,raw_input().split())
for i in range(0,n):
    d[i+1].append(p[i])
ans = []
for i in range(1,n+1):
    c = [0]*(1100)
    ans.append(bfs(i,c))
for i in ans:
        print i,
