n,k = map(int,raw_input().split())
if(k == 0 and n>1):
    print "No solution"
    exit()
else:
    ans = ""
    ans += str(k)
    n-=1
    for i in range(0,n):
        ans+= "0"
print ans
