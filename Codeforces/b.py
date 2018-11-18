n = input()
x = raw_input()
for i in range(2,n+1):
    if(n%i == 0):
        x = x[i-1::-1] + x[i::]
print x
