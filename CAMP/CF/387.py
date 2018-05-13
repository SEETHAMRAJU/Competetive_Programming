X = raw_input()	
Y = raw_input()
x = [0,0]
y = [0,0]

x[0] = int(X[0]) * 10 + int(X[1])
x[1] = int(X[3])*10 + int(X[4])
y[0] = int(Y[0])*10 + int(Y[1])
y[1] = int(Y[3])*10 + int(Y[4])

ans = [0,0]
ans[0] = x[0]  - y[0]
ans[1] = x[1] - y[1]
if(ans[1] < 0):
	ans[1] = ans[1] + 60
	ans[0] = ans[0] - 1
if(ans[0] < 0):
	ans[0] += 24
ans[0] = str(ans[0])
if(len(ans[0])!= 2):
    ans[0] = "0" + str(ans[0])
ans[1] = str(ans[1])
if(len(ans[1])!= 2):
    ans[1] = "0" + str(ans[1])
print ans[0] + ":" + ans[1]
