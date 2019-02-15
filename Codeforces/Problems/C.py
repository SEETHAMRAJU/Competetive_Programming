from sys import *
d = stdin.readlines()
n = int(d[0])
x = []
index = {}
for i in range(0,2*n-2):
    temp = d[i+1][:len(d[i+1])-1:]
    index[temp] = i
    x.append(temp)
y = x
x.sort(key=lambda p:len(p))
s = x[2*n-3]
r = x[2*n-4]
pre = ""
if(r[0] in y):
    pre += r
else:
    pre += s
a = ""
ans=['']*(2*n-2)
for i in pre:
    a += i
    ans[index[a]] = 'P'
for j in range(0,len(ans)):
    if(ans[j] == ''):
        ans[j] = 'S'
print reduce(lambda x,y:x+y,ans)
