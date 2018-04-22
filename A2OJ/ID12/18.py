from math import *
n,m = map(int,raw_input().split())
if(m > (n*(n-1))//2):
    print m - (n*(n-1))//2
else:
    k = (1 + sqrt(1+8*m))//2
    print m - k
