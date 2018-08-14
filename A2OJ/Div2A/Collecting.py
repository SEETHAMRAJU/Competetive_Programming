k = input()
x = []
for i in range(0,4):
    y = raw_input()
    x.append(y)
d = {
        "1": 0,
        "2": 0,
        "3": 0,
        "4": 0,
        "5": 0,
        "6": 0 ,
        "7": 0,
        "8": 0,
        "9": 0
        }
for i in range(0,4):
    for j in range(0,4):
        if(x[i][j] != "."):
            d[x[i][j]] += 1

for i in range(1,10):
    if(d[str(i)] > 2*k):
        print "NO"
        exit()
print "YES"
