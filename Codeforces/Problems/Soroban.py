d = {
        "0" : "O-|-OOOO", 
        "1" : "O-|O-OOO",
        "2" : "O-|OO-OO",
        "3" : "O-|OOO-O", 
        "4" : "O-|OOOO-",
        "5" : "-O|-OOOO",
        "6" : "-O|O-OOO",
        "7" : "-O|OO-OO",
        "8" : "-O|OOO-O",
        "9" : "-O|OOOO-"
        }
x = raw_input()
i = len(x)-1
while(i>=0):
    print d[x[i]]
    i -= 1


