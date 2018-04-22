test = input()
i = 0
res = []
while(test > 0):
    x = input()
    if(x == 0):
        res.append(1)
    elif(x == 1):
        res.append(2)
    else:
        if(x%2 == 0):
            res.append((x*2)-1)
        else:
            res.append((((x-1)*2) - 1)*2)
    test-=1
for x in res:
    print x
