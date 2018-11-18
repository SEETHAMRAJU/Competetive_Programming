from sys import *
n,k = map(int,raw_input().split())
x = map(int,raw_input().split())
s = 0
mn = maxint
for i in range(0,k):
    s = x[i]
    j = (i+k)%n
    while(j!=i):
        s += x[j]
        j = (j + k)%n
    if(s<mn):
        mn = s
        res = i
print res+1
