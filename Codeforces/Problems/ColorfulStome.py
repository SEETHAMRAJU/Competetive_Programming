
s = raw_input()
l = raw_input()
i = 0
j = 0
S = len(s)
L = len(l)
while(i< S and j <L):
    if(s[i] == l[j]):
        i+=1
        j+=1
    else:
        j += 1

print i+1
