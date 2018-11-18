def solve(x,p,k):
    stack = []
    stacknum = []
    i = 0
    s = 0
    stack.append(x[0])
    stacknum.append(0)
    while(i<len(x)):
        if(x[i] == "("):
            stack.append(x[i])
            stacknum.append(i)
        else:
            if(stack[len(stack)-1] == "("):
                p[stacknum[len(stack)-1]] = 1
                p[i] = 1
                s += 2
                if(s == k):
                    return p

                stack.pop()
                stacknum.pop()
        i += 1
    return p
n,m = map(int,raw_input().split())
x = list(raw_input())
p = [0]*len(x)
p = solve(x,p,m)
ans = ""
i = 0
if(n == m):
    ans = ""
    for i in x:
        ans += i
    print ans
    exit()
for i in range(0,len(p)):
    if(p[i] == 1):
        ans += x[i]

print ans
