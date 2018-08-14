n,k = map(int,raw_input().split())
x = raw_input()
x = list(x)
c = [0]*26
d = {}
for i in range(97,97+26):
    d[chr(i)] = []
for i in range(0,n):
    c[ord(x[i])-ord('a')] += 1
    d[x[i]].append(i)
m = 0
while(m<26):
    if(c[m] > 0):
        if(k  >= c[m]):
            k = k - c[m]
            for j in d[chr(m+97)]:
                x[j] = "."
        else:
            i = 0
            while(k>0 and i < len(d[chr(m+97)])):
                x[d[chr(m+97)][i]] = "."
                k -= 1
                i += 1
    if(k == 0):
        break
    m += 1
ans = ""
for i in x:
    if(i != "."):
        ans += i
print ans
