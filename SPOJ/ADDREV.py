n = input()
<<<<<<< HEAD
answer = []
for i in range(0,n):
    x,y = map(int,raw_input().split())
    x = str(x)
    x = x[::-1]
    y = str(y)
    y = y[::-1]
    z = int(x) + int(y)
    while(z%10 == 0):
        z = z /10
    
    z = str(z)
    z = z[::-1]
    answer.append(z)
for k in answer:
    print k
=======
i =0 
q = []
while(i<n):
    temp = map(str,raw_input().split())
    q.append(temp)
    i+=1
for k in q:
    x = k[0][::-1]
    y = k[1][::-1]
    x = int(x)
    y = int(y)
    s = x+y
    s = str(s)
    s = s.replace("0","")
    print s[::-1]
>>>>>>> a415c3b669e4b08af3d4166ef0aec094b688478f
