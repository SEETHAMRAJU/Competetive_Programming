'''
    This is a program to compare two files.
    Generally used to check the required ouptut and the obtained output.
    This program stops as soon as the files don't match and gives the lines which donot match
'''
x = raw_input()
y = raw_input()
x = x+".txt"
y = y+".txt"
p = open(x,"r")
q = open(y,"r")
n = p.readlines()
m = q.readlines()
i = 0
while(i<len(n)):
    if(n[i] != m[i]):
        print n[i],m[i]
        print "Not Matching"
        exit()
    i += 1
print "Matching"
