x =raw_input()
y = raw_input()
a = [0]*26
b = [0]*26
cont = ord('a')
for i in x:
    a[ord(i)-cont] += 1
for j in y:
    b[ord(j)-cont] += 1
count = 0
for i in range(0,26):
    if(b[i] > 0):
        if(a[i] > 0):
            count += min(b[i],a[i])
        else:
            print "-1"
            exit()
print count
