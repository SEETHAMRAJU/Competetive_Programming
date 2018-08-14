m = 256
M = 1729
def p(l):
    t = 0
    for i in l:
        t = t*m + ord(i)
    return t%M    
L = ["TTT","HTH","HHT","THH","TTH","THT","HTT","HHH"]
for i in L:
   print i + " " +  str(p(i)) 
