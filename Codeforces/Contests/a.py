n = input()
x = map(int,raw_input().split())
l = list(set(x))
d = {}
for i in l:
    d[i] = 0
for i in x:
    d[i] += 1
for i in d:
    if(i%2 == 0):



