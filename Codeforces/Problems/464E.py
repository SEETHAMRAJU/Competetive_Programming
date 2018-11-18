M = 1000000007
def add(l,x,y):
    temp = ""
    for i in y:
        temp += i
    l = l.replace(x,temp)
    return l
def getans(l):
    ans = 0
    for i in range(0,len(l)):
        ans = (ans*10 + int(l[i]))%M
    return ans
l = raw_input()
n = input()
for o in range(0,n):
    x = raw_input().split("->")
    l = add(l,x[0],x[1])
if(len(l) == 0):
    print "0"
else:
    print getans(l)
