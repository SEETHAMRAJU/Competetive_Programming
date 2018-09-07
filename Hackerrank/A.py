n = input() 
x = []
for i in range(0,n):
    temp = raw_input()
    x.append(temp)
if(n == 1):
    ans = ""
    for i in range(0,9):
        ans += x[0]
elif(n>1):
    ans = ""
    for j in x:
        ans += j
    i = n-2
    while(i>=0):
        ans += x[i]
        i -= 1
print ans

    
