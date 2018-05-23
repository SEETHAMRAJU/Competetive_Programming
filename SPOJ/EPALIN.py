import sys
def solve(l):
    i = 0
    j = len(l)-1
    temp = ""
    while(i <= j):
        if(l[i] != l[j]):
            temp = l[i] + temp
            i += 1
        else:
            l = l + temp
            temp = ""
            i += 1
            j -= 1
    return l
answer = []
lines = sys.stdin.readlines()
for line in lines:
    y = solve(line[:len(line)-1:])
    answer.append(y)
for k in answer:
    print k
