def calc(l):
    tot = 0
    for i in l:
        tot = tot + ord(i)
    return tot        
def solve(y,z,x,no):








n = input()
y = []
for i in range(0,n):
    x = raw_input()
    y.append(x)
t = input()
test = []
no = []
for i in range(0,t):
    x = raw_input()
    no.append(int(x[0]))
    test.append(x[2::])
z = []
for i in y:
    z.append(calc(i))
answer = []
for i in test:
    ans = solve(y,z,i,no)
    answer.append(ans)
for i in answer:
    print i

