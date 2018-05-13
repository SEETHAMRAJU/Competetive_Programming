def reverse(l):
    temp1 = l.pop()
    l.insert(0,temp1)
    return l
n = input()
m = input()
if(n%2 == 0):
    rev = [2,0,1]
    n = n/2
    t = 1
    if(n>3 and n%3 != 0):
        n = n%3
    elif(n>3 and n%3 == 0):
        n = 3
    while(t < n):
        rev = reverse(rev)
        t += 1;
    print rev.index(m)
    exit()
else:
    rev = [1,0,2]
    n = n//2
    n = n + 1
    if(n>3 and n%3 != 0):
        n = n%3
    elif(n>3 and n%3 == 0):
        n = 3
    t = 1
    while(t<n):
        rev = reverse(rev)
        t += 1
    print rev.index(m)
    exit()
