n = input()
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
