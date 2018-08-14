M = 1729
r = 256
REQ = [728,716,1114,1102,991,979,1377,1365]

def p(l):
    t = 0
    for i in l:
        t = t*r + ord(i) 
    return t%M

def solve(x,i):       
    t = 0
    d = { 728:0,
          716:0,
          1114:0,
          1102:0,
          991:0,
          979:0,
          1377:0,
          1365:0
            }
    t = p(x[:3:])
    d[t] += 1
    for j in range(3,len(x)):
        t = t - ((ord(x[j-3])*(r**2)) %M)
        t = (t*r + ord(x[j]))%M
        d[t] += 1
    j = 0
    ret = []
    for j in REQ:
        ret.append(d[j])
    return ret
ans = []
t = input()
for i in range(0,t):
    n = input()
    x = raw_input()
    ans.append(solve(x,i))
for i in range(0,t):
    print str(i+1),
    for j in ans[i]:
        print j,
    print ""

    
    
    
