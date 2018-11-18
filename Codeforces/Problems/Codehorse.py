def check(m,n):
    if(len(m) != len(n)):
        return -1
    else:
        count = 0
        for i in range(0,len(m)):
            if(m[i] != n[i]):
                count += 1
        return count

n = input()
prev = []
for i in range(0,n):
    y = raw_input()
    prev.append(y)
rec = []
for i in range(0,n):
    y = raw_input()
    rec.append(y)
prev.sort(key = len)
rec.sort(key = len)
ans = 0
for i in range(0,n):
    req = check(prev[i],rec[i])
    ans += req
print ans

