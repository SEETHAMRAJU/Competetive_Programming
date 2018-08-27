n = input()
m = {}
p = raw_input()
l = p.split(" ")
for i in range(0,n):
    x = list(set(l[i]))
    x.sort()
    ans = ""
    for j in x:
        ans += j
    if(ans not in m.keys()):
        m[ans] = 1
print len(m)
    
