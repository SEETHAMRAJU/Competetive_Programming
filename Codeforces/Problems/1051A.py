t = input()
for i in range(0,t):
    x = raw_input()
    y = list(x)
    count = [0,0,0]
    d = {0:[],1:[],2:[]}
    for i in range(0,len(y)):
        if(ord(y[i])<58):
            count[0]+=1
            d[0].append(i)
        elif(ord(y[i])<91 and ord(y[i])>64):
            count[1]+=1
            d[1].append(i)
        elif(ord(y[i])>96 and ord(y[i])<123):
            count[2]+=1
            d[2].append(i)
    if(count[0] == 0):
        if(count[1]>1):
            y[d[1][0]] = '8'
            count[1]-=1
            count[0]+=1
        elif(count[2]>1):
            y[d[2][0]] = '7'
            count[2]-=1
            count[0]+=1
    if(count[1] == 0):
        if(count[0]>1):
            y[d[0][0]] = 'Q'
            count[0]-=1
            count[1]+=1
        elif(count[2]>1):
            y[d[2][0]] = 'L'
            count[2]-=1
            count[1]+=1
    if(count[2] == 0):
        if(count[0]>1):
            y[d[0][0]] = 'p'
            count[0]-=1
            count[2]+=1
        elif(count[1]>1):
            y[d[2][0]] = 'o'
            count[1]-=1
            count[2]+=1
    ans = ""
    for i in y:
        ans += i
    print ans
