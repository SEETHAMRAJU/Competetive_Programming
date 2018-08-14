t = input()
ans = []
while(t > 0):
    x = raw_input()
    s = x[::-1]
    i = 1
    count = 0
    while(i  <len(x)):
#        print abs(ord(x[i]) - ord(x[i-1]))
#        print abs(ord(s[i]) - ord(s[i-1]))
        if(abs(ord(s[i])-ord(s[i-1])) == abs(ord(x[i])-ord(x[i-1]))):
            count += 1
        i = i + 1
    if(count == (len(x)-1)):
        ans.append("Funny")
    else:
        ans.append("Not Funny")
    t -= 1
for j in ans:
    print j
