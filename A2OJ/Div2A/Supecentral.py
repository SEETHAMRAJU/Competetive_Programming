arr = []
n = input()
for j in range(0,n):
    x = map(int ,raw_input().split())
    arr.append(x)
cnt = 0
for i in arr:
    a = 0
    b = 0
    c = 0
    d = 0
    for j in arr:
        if(i[0] < j[0] and i[1] == j[1]):
            a = max(a,1)
        elif(i[0] > j[0] and j[1] == i[1]):
            b = max(b,1)
        elif(i[1] < j[1] and i[0] == j[0]):
            c = max(c,1)
        elif(i[1] > j[1] and j[0] == i[0]):
            d = max(d,1)
    if(a+b+c+d == 4):
        cnt += 1

print cnt




