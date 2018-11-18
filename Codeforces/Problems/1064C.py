n = input()
s = raw_input()
d = {}
p = "abcdefghijklmnopqrstuvwxyz"
for j in p:
    d[j] = 0
ans = ""
for i in s:
    d[i]+=1
for i in d:
    if(d[i] > 0):
        while(d[i]>0):
            ans += i
            d[i]-=1
print ans
