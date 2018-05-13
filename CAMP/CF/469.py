n = input()
x = map(int,raw_input().split())
y = map(int,raw_input().split())
l = x[1::] + y[1::]
l.sort()
l = list(set(l))
if(len(l) != n):
    print "Oh, my keyboard!"
    exit()
for i in range(0,n):
    if(i + 1 != l[i]):
        print "Oh, my keyboard!"
        exit()
print "I become the guy."
