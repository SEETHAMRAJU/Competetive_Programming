def solve(p,c):
    for i in range(0,len(p)):
        t = dfs(i,p)
        if(t == 1):
            return 1
    return -1
def dfs(s,p,c):
    c[s] = 2
    n = len(p)
    for i in range(0,len(p)):
        if(i != s):
            if(p[s][i] == 1 and c[i] == 0):
                if(s == n-1 or i == n-1 or i == 0 or ):
                    return 1;
                dfs(i)
    return -1;
n = input()
p = []
for i in range(0,n):
    a,b = map(int,raw_input().split())
    for i in range(0,a):
        x = list(raw_input())    
        if(x[0] != " "):
            p.append(x)  
    arr = []
    for l in p:
        temp = []
        for i in l:
            if(i == "#"):
                temp.append(0)
            else:
                temp.append(1)
        arr.append(temp)
    c = [0]*len(arr)
    answer.append(solve(arr),c)
