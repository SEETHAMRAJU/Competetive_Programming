def top(l):
    return l[len(l)-1]
def solve(x):
    x = list(x)
    stack = []
    stack.append(x[0])
    l = "<"
    r = ">"
    i = 1
    count = 0
    while(i<len(x)):
        if(x[i] == r and stack != []):
            if(top(stack) == l):
                count += 1
                stack.pop()
        else:
            stack.append(x[i])
        if(stack == []):
            break
        i += 1
    return count

n = input()
answer = []
for i in range(0,n):
    x = raw_input()
    if(x[0] == ">"):
        answer.append(0)
    else:
        answer.append(2*solve(x))

for p in answer:
    print p


