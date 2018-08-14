x = input()
l = map(int , raw_input().split())
k = []
[k.append(x) for x in l if x not in k]
num = []
for i in range(len(k)):
    num.append(0)
j= 0
while(j < len(k)):
    i = 0
    while(i < len(l)):
        if(k[j] == l[i]):
            num[j]+=1
        i+=1
    j+=1
sum = 0
for x in num:
    sum = sum + (x/2)
print sum