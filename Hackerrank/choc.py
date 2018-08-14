n = input()
c = map(int , raw_input().split())
m,d = map(int,raw_input().split()) 
i = 0
tot = 0
while(i < n - m + 1):
    if(reduce(lambda x,y : x+y , c[i:i+m :]) == d):
        tot += 1
    i += 1
print tot