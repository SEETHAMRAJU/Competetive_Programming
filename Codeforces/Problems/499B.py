n,m = map(int,raw_input().split())
x = []
for i in range(0,m):
    y = raw_input()
    y = list(y.split())
    x.append(y)
d = {}
for i in x:
    if(len(i[0]) > len(i[1])):
        d[i[0]] = i[1]
    else:
        d[i[0]] = i[0]
p = ""
p = raw_input()
p = p.split()
ans = ""
for i in p:
    ans = ans + d[i] + " "
print ans


