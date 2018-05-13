M = 1729
x = 256
def hashvalue(t,x):
    hsh = ord(t[0]) + ord(t[1]) * (x*x)
    return hsh%M
 
n = input()
l = raw_input()
hashtable = [0]*M
i = 0
d = {}
for i in range(0,M):
    d[i] = []
i = 0
while(i<n-1):
    temp = hashvalue(l[i:i+2:],256)
    hashtable[temp] += 1;
    d[temp].append(l[i:i+2])
    i += 1 
maxso = 0
i = 0
a = 0
while(i < M):
    if(hashtable[maxso] < hashtable[i]):
        maxso = i
    i += 1
print d[maxso][0]
