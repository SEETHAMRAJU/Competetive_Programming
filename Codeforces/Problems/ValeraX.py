n = input()
x = []
for i in range(0,n):
    y = raw_input()
    x.append(y)
i = 0
j = 0
a = 0
b = n-1
d = x[0][0]
while(i<n):
    if(x[i][j] == x[a][b] and x[i][j] == d):
        i += 1
        j += 1
        a += 1
        b -= 1

    else:
        print "NO"
        exit()
d2 = x[0][1]
for k in range(0,n):
    for l in range(0,n):
        if(k != l):
            if(k + l != n-1):
                if(x[k][l] == d or x[k][l] != d2):
                    print "NO"
                    exit()
print "YES"
