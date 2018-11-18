x = []
for i in range(0,4):
    y = raw_input()
    x.append([len(y)-2,i])
x.sort()
y = ["A","B","C","D"]
flag = 0
if(x[0][0]*2 <= x[1][0]):
    flag = 1
if(x[3][0]//2 >= x[2][0]):
    if(flag == 1):
        flag = 0
    else:
        flag = 2
elif(x[3][0]//2 < x[2][0]):
    flag = max(flag,0)

if(flag == 0):
    print "C"
elif(flag == 1):
    print y[x[0][1]]
elif(flag == 2):           
    print y[x[3][1]]
