x = raw_input()
left = 0
right = 0
i = 0
for i in range(0,len(x)):
    if(x[i] == "^"):
        break;
for j in range(0,i):
    if(x[j] != "="):
        left += (i-j)*(int(x[j]))

for j in range(i+1,len(x)):
    if(x[j] != "="):
        right += (j-i)*(int(x[j]))
if(left > right):
    print "left"
elif(right>left):
    print "right"
else:
    print "balance"
