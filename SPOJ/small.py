t = input()
ans = []
arr = [1]*(105)
i = 1
while(i<=100):
    arr[i] = i*arr[i-1]
    i += 1
while(t>0):
    n = input()
    ans.append(arr[n])
    t-=1
for k in ans:
    print k
