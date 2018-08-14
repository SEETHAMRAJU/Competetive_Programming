x = raw_input()
new = 0
for i in x:
    if(ord(i) >= 65 and ord(i) <= 96):
        new += 1
    else:
        pass
print new+1