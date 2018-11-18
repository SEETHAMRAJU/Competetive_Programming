n,m = map(int,raw_input().split())
x = []
for i in range(0,n):
    y = raw_input()
    temp = list(y)
    x.append(temp)

flag = 0
for i in range(0,n):
    flag = 0
    for j in range(0,m):
        if(x[i][j] == "."):
            if(flag == 0):
                if(i%2 == 0):
                    x[i][j] = "W"
                else:
                    x[i][j] = "B"
                flag = 1
            else:
                if(i%2 == 0):
                    x[i][j] = "B"
                else:
                    x[i][j] = "W"
                flag = 0
ans = []
for i in range(0,n):
    temp = ""
    for j in x[i]:
        temp += j
    ans.append(temp)

for j in ans:
    print j


        
