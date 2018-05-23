from math import *
pi = 3.1415
n = input()
answer = []
while(n>0):
    x = raw_input()
    i = 0
    temp = []
    for j in range(0,len(x)):
        if(x[j] == 'e'):
            temp.append(int(x[i:j:]))
            i = j+1
    temp.append(int(x[i:j+1:]))
    a = temp[0]
    b = temp[1]
    c = temp[2]
    l = sqrt((a**2) + (c**2))
    area = (pi * a * l) * b
    answer.append(int(area+1))
    n -= 1
for k in answer:
    print k
