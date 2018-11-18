n,k = map(int,raw_input().split())
s = raw_input()
q = set(list(s))
q = list(q)
q.sort()
ans = ""
if(n>=k):
    ans += q[len(q)-1]
    for i in range(1,k):
        ans += q[0]
elif(n<k):
    for i in range(n,k):
        s += q[0]
    ans = s
print ans
