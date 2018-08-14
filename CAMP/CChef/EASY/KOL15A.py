t = input()
answer = []
for i in range(0,t):
    x = list(raw_input())
    s = 0
    for j in x:
        if(ord(j) <= 57 and ord(j) >= 48):
            s += int(j)
    answer.append(s)
for k in answer:
    print k
