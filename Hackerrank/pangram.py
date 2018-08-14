# Enter your code here. Read input from STDIN. Print output to STDOUT
x = raw_input()
y = x.lower()
y = y.replace(" ","")
print y
s = []
if(len(y) < 26):
    print "not pangram"
    exit()
for j in y:
    if(j not in s):
        s.append(j)
if(len(s) == 26):
    print "pangram"
    print s
else:
    print "not pangram"
    print s