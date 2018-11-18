def p(n):
    if(n>0):
        return 10*p(n-1)
    else:
        return 1
m,s=map(int,raw_input().split())
a,b,c,d=(s-1)/9,(s-1)%9,s/9,s%9
if 9*m<s or m>1 and s<1:
  print -1,-1
elif s<1:
  print 0,0
else:
  print p(m-1)+b*p(a)+p(a)-1,(p(c)-1)*p(m-c)+d*p(m-c-1)
