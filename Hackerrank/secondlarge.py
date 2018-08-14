n=input()
l=[]
#for i in range(0,n):
#    l.append(input().split())
l = [int(x) for x in input().split()]    
j=0
while(j<n):
    i=j
    while(i<n):
        if(l[j]<=l[i]):
            l[i]=l[i]+l[j]
            l[j]=l[i]-l[j]
            l[i]=l[i]-l[j]
        i+=1
    j+=1
print(str(l[1]))

