l = map(int ,raw_input().split())
x = raw_input()
d = map(chr , range(ord('a'),ord('z')+1))
samp = []
for i in x :
    j = 0
    while(j < 26):
        if(i == d[j]):
            samp.append(j)
        j+=1

j =0 
samp1 = []
for k in samp:
    j =0 
    while(j < len(l)):
        if(k == j):
            samp1.append(l[j])
        j+=1
a = max(samp1)
#print a
print (a * len(x))
        
            