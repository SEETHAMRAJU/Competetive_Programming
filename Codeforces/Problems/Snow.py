n = input()
x = raw_input()
s = 0
t = 0

flag = 0
for i in range(0,n):
    if(x[i] == "R"):
        s = i+1
        break
i = n-1
while(i>=0):
    if(x[i] == "R"):
        t = i + 2
        break
    i -= 1

for i in x:
    if(i != "R"):
        flag += 1
if(flag == n):
    for i in range(0,n+1):
        if(x[i] == "L"):
            t = i
            break
    i = n-1
    while(i>=0):
        if(x[i] == "L"):
            s = i+1
            break
        i -= 1 
print s,t
