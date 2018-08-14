n = input()
d = {}
ans = ""
count = 1
x = raw_input()
ans = x
ans2 = ""
for i in range(1,n):
    x = raw_input()
    if(x == ans):
        count += 1
    else:
        ans2 = x
if(count > n-count ):
    print ans
else:
    print ans2
