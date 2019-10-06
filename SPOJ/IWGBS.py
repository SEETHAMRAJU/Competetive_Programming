N = 10001
p = [0]*N
s = [0]*N
p[1] = 1
s[1] = 1
n = input()
for i in range(2,n+1):
    s[i] = p[i-1] + s[i-1]
    p[i] = s[i-1]
print s[n] + p[n]
