def check(l):
    l = list(l)
    i = 1
    p = 0
    while(i<len(l)):
        if(l[i-1] != l[i]):
            p+=1
        i += 1
    if(p<=2):
        return 1;
    return -1;
n = input()
ans = []
for i in range(0,n):
    x = raw_input()
    ans.append(check(x))
for i in ans:
    if(i == 1):
        print "uniform"
    else:
        print "non-uniform"
