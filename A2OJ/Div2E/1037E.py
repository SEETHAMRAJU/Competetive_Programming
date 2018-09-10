def dfs()

n,m,k = map(int,raw_input().split())
d = {}
answer = []
for i in range(1,n+1):
    d[i] = []
maxsofar = 0;
for i in range(0,m):
    x,y = map(int,raw_input().split())
    d[x].append(y)
    d[y].append(x)
    maxsofar = max(maxsofar, max(len(d[y]),len(d[x])))
    if(maxsofar < k):
        answer.append(0)



    
    
    
    
    
