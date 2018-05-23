n = input()
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
