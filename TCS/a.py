f = [1,1]
n = input()
x = map(int,raw_input().split())

for i in range(2,100000):
	temp = f[i-1] * i
	fact.append(temp)

d = {}
for i in range(-89,91):
	d[i] = 0
for j in x:
	d[j] += 1
tot = 0
for k in d:
	tot = tot + f[d[k]]

