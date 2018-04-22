n = input()
score = map(int , raw_input().split())
maximum = score[0]
minimum = maximum
breakx = 0
breakn = 0
for x in score:
    if(x<maximum and x < minimum):
    	minimum = x
        breakn += 1
    elif(maximum < x):
    	maximum = x
        breakx += 1
    else:
        pass
print str(breakx) + " " + str(breakn-1)