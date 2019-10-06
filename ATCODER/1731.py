def substring(s,j):
    k = 0
    if(len(s)<len(j)):
        return 0
    for i in range(len(j)):
        if(s[i]==j[i]):
            k += 1
        else:
            return -1
    return k


def solve(x,l):
    s = 0
    for j in l:
        i = substring(x,j)
        print(i,x,j)
        if(i==len(j) and len(x)==len(j)):
            s+=1
        elif(i!=-1 and i!=0):
            temp = solve(x[i::],l)
            print(temp)
            if(temp!=0):
                s += 1+temp
    return s
s = raw_input()
n = input()
l = []
for i in range(0,n):
    temp = raw_input()
    l.append(temp)
print(l)
print(solve(s,l))
