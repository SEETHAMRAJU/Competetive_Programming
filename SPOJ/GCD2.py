def solve(a,b):
    p = min(a,b)
    q = max(a,b)
    a = p
    b = q
    while(min(a,b) != 0):
        t = a
        a = b%a
        b = t
    return max(a,b)
t = int(input())
answer = []
for i in range(0,t):
    a,b = map(long,raw_input().split())
    if(a == 0):
        answer.append(0)
        pass
    p = solve(a,b)
    answer.append(p)
for j in answer:
    print (j)
