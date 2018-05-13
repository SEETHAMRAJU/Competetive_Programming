x = map(int,raw_input().split())
d = {}
d["S"]   = [x[0] ,x[1] , x[2] , x[3] , x[4]]
d["M"]   = [x[1] , x[2] , x[0] , x[3] , x[4]]
d["L"]   = [x[2] , x[3] , x[1] , x[4] , x[0]]
d["XL"]  = [x[3] , x[4] , x[2] , x[1] , x[0]]  
d["XXL"] = x[::-1]
ref = ["S","M","L","XL","XXL"]
n = input()
given = []
for i in range(0,n):
    temp = raw_input()
    given.append(temp)
print d

for l in given:
    i = 0
    print "--------"
    print l
    while(i < len(d[l])):
        if(d[l][i] != 0):
            print i
            print ref[i]
            d[l][i] -= 1
            break
        i += 1

