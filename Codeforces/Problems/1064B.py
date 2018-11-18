def p(n):
    i = n
    c = 0
    while(i>0):
        i = (i-1)&n
        print i
        c+=1
    return c
t = input()
answer = []
for j in range(0,t):
    n = input()
    answer.append(p(n))
for j in answer:
    print j
