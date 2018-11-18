def fact(n):
    ans = 1
    i = 1
    while(i<=n):
        ans = ans*i
        i += 1
    return ans
answer = []
while(True):
    n = input()
    if(n == ):
        break;
    answer.append(fact(n))
for j in answer:
    print j
