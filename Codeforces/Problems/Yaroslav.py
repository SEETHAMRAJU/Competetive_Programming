n = input()
l = map(int,raw_input().split())
x= set(l)
p = {}
for i in x:
    p[i] = 0
for j in l:
    p[j] += 1
for i in x:
    if(p[i] > (n+1)/2):
        print "NO"
        exit()
print "YES"
