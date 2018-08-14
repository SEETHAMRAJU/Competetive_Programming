from math import *
answer = []
t = input()
for i in range(0,t):
    x = raw_input()
    y = list(x)
    y.sort()
    count = 0
    y.reverse()
    x = list(x)
    for i in range(0,len(x)):
        if(x[i] != y[i]):
            count+=1
    a = log(max(count,1)) * count
    if((a*10)%10 >= 5):
        a = ceil(a)
        answer.append(int(a))
    else:
        a = floor(a)
        answer.append(int(a))
for j in answer:
    print j
    




