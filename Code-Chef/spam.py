def pass_t(x,w,b):
    return w*x + b
def pass_all(x,final):
    i = 0
    while(i < len(final)):
       x = pass_t(x,final[i][0],final[i][1]) 
       i += 1
    return x
t = input()
ans = []
while(t > 0):
    final = []
    n , minn , maxn = map(int,raw_input().split())
    i = 0
    while(i < n):
        x = map(int,raw_input().split())
        final.append(x)
        i += 1
    
    
    even = 0
    odd = 0
    while(minn<= maxn):
        if(pass_all(minn,final) % 2 == 0):
            even += 1
            print"Hi"
        else:
            odd += 1
            print "Hi"
        minn += 1
    ans.append([even,odd])
    t -= 1
for j in ans:
    for k in j:
        print k,
    print "\n"

