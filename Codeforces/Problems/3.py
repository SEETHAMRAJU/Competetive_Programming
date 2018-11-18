x = raw_input()
y = raw_input()
l = ""
i = 0
while(i<len(x)):
    if(x[i] == y[i]):
        l = l + "0"
    else:
        l = l + "1"
    i += 1
print l
