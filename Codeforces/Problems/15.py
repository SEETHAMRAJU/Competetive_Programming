n = input()
l = []
x = 0
for i in range(0,n):
    t = raw_input()
    if('+' in t):
        x += 1
    else:
        x -= 1
print x
