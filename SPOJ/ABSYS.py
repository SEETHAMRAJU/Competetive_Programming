def solve(j):
    p = list(j)

n = input()
x = []
for i in range(0,n):
    y = raw_input()
    x.append(y)
ans = []
for j in x:
     ans.append(solve(j))


