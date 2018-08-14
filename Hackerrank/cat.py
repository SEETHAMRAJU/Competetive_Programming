def absolute(x):
    if(x < 0):
        return -x
    else:
        return x
q = input()
result = []
while( q > 0):
    x,y,z = map(int , raw_input().split())
    a = absolute(z-x)
    b = absolute(z-y)    
    if(a==b):
        result.append("Mouse C")
    elif(a > b):
        result.append("Cat B")
    else:
        result.append("Cat A")
    q-=1

for i in result:
    print i
    