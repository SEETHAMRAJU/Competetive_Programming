n,m = map(int,raw_input().split())
s = list(raw_input())
t = list(raw_input())
i = 0
j = 0
if("*" not in s):
    if(n != m):
        print "NO"
        exit()
    elif(n == m):
        for i in range(0,n):
            if(s[i] != t[i]):
                print "NO"
                exit()
        print "YES"
        exit()

while(i<n and j<m):
    if(s[i] == "*"):
        break;
    elif(s[i] != t[j]):
        print "NO"
        exit()
    i += 1
    j += 1
i = m-1
j = n-1
while(i>=0 and j >= 0):
    if(s[j] == "*"):
        break;
    elif(s[j] != t[i]):
        print "NO"
        exit()
    i -= 1
    j -= 1
if(n-1 > m):
    print "NO"
    exit()
print "YES"



