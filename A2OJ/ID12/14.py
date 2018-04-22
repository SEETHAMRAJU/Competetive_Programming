n = input()
x = raw_input()
t = x[0]
k = 0
for i in range(len(x)-1):
    if(x[i] == x[i+1]):
        k+=1
print k



