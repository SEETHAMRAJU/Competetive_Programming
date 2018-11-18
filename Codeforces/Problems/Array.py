n = input()
x = map(int,raw_input().split())
a = []
b = []
c = []
for i in x:
    if(i == 0):
        c.append(0)
    elif(i>0):
        b.append(i)
    else:
        a.append(i)

if(len(a)%2 == 0):
    c.append(a.pop())
if(b == []):
    b.append(a.pop())
    b.append(a.pop())

print len(a),
for i in a:
    print i,
print ""
print len(b),
for i in b:
    print i,
print ""
print len(c),
for i in c:
    print i,
