def lapin(l):
    a1 = l[:len(l)//2:]
    a2 = ""
    if(len(l)%2 == 0):
        a2 = l[len(l)//2::]
    else:
        a2 = l[len(l)//2+1::]
    e1 = [0]*(26)
    e2 = [0]*(26)
    for i in a1:
        e1[ord(i)-ord('a')]+=1
    for j in a2:
        e2[ord(j) - ord('a')]+=1
    if(e1 == e2):
        return 'YES'
    return 'NO'
n = input()
answer = []
while(n>0):
    p = raw_input()
    answer.append(lapin(p))
    n -= 1

for k in answer:
    print k
