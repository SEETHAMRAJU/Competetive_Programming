count = 0
def merge(a,l,r,d):
    global count
    n1 = d - l + 1
    n2 = r - d
    L = []
    R = []
    i = 0
    j = 0
    while(i<n1):
        L.append(a[l+i])
        i += 1
    while(j<n2):
        R.append(a[d+1+j])
        j += 1
    i = 0
    j = 0
    k = l
    while(i<n1 and j<n2):
        if(L[i] < R[j]):
            count += j
            a[k] = L[i]
            i += 1
        else:
            a[k] = R[j]
            j += 1
        k+=1
    while(i<n1):
        count+=j
        a[k] = L[i]
        k+=1
        i+=1
    while(j<n2):
        a[k] = R[j]
        k+=1
        j+=1

def cmergesort(a,i,j):
    if(i<j):
        d = (i+j-1) / 2
        cmergesort(a,i,d)
        cmergesort(a,d+1,j)
        merge(a,i,j,d)
        
    
t = input()
answer = []
for i in range(0,t):
	x = []
	n = input()
	for i in range(0,n):
		temp =input()
		x.append(temp)
	cmergesort(x,0,n-1)
 	answer.append(count)
	count = 0
for i in answer:
	print i

