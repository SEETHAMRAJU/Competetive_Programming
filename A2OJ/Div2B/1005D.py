x = raw_input()
count = 0
j = len(x)-1
temp = 0
while(j>=0):
    temp += int(x[j])
    if(temp%3 == 0):
        temp = 0
        count+=1
    j -= 1
print count
