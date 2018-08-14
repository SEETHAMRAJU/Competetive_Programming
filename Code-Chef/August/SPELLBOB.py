t = input()
answer = []
for i in range(0,t):
    p = raw_input()
    q = raw_input()
    l = [0,0,0]
    for i in range(0,3):
        if((p[i] == "b" and q[i] == "o" )or (q[i] == "b" and p[i] == "o")):
            l[i] = 2
        elif(p[i] == "b" or q[i] == "b"):
            l[i] = 1
        elif(p[i] == "o" or q[i] == "o"):
            l[i] = 3
    l.sort()
    if(l[0] == 0):
        answer.append("no")
    else:
        
        for j in l:
            
for j in answer:
    print j
