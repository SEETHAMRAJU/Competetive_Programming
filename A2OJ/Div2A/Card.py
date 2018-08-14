trump = raw_input()
x = raw_input()
first = x[:2:]
second = x[3::]
d = {
        "6": 1,
        "7": 2,
        "8": 3,
        "9": 4,
        "T": 5,
        "J": 6,
        "Q": 7,
        "K": 8,
        "A": 9
        }
if(first[1] == second[1]):
    if(d[first[0]] > d[second[0]]):
        print "YES"
    else:
        print "NO"
elif(first[1] == trump):
    print "YES"
else:
    print "NO"
