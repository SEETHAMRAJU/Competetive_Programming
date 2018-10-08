'''
n,m = map(int,raw_input().split())
voters = []
arr = [0]*3001
c = 0
for i in range(0,n):
    temp = map(int,raw_input().split())
    if(temp[0] != 1):
        voters.append(temp[::-1])
        c += 1
    arr[temp[0]] += 1
voters.sort()
maxsofar = 0
for i in range(1,3001):
    if(arr[maxsofar] < arr[i]):
        maxsofar = i
total = 0
if(maxsofar != 1):
    j = 0
    while(arr[1] <= arr[maxsofar]):
        arr[1]+=1
        total += voters[j][0]
        arr[voters[j][1]] += 1
        j += 1

print total
'''
n, m = map(int, raw_input().split(' '))

v = [[] for i in range(m)]

for i in range(n):
	a = map(int, raw_input().split(' '))
	v[a[0] - 1].append(a[1])

for i in range(m):
	v[i].sort()

res = 10**18
for i in range(0, max(len(i) for i in v) + 1):
	cost = 0
	need = i + 1 - len(v[0])
	print need,i
        for ind in range(m):
		if ind != 0 and len(v[ind]) > i:
			for k in range(len(v[ind]) - i):
				cost += v[ind][k]
				v[ind][k] *= -1
				need -= 1
	if need > 0:
		ll = []
		for j in range(1, m):
			ll += v[j]
		ll.sort()
                print ll
		for j in ll:
			if need == 0:
				break
			if j < 0:
				continue

			cost += j
			need -= 1

	for j in range(m):
		for k in range(len(v[j])):
			v[j][k] = abs(v[j][k])

	res = min(res, cost)

print res
