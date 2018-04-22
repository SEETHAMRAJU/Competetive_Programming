x=input("Please enter a number : ")
print("The first "+str(x)+" fibbanico numbers are :")
i = 1
j = 0
k = 2
'''sum = 0'''
while(j<x):
    print(i)
    if(i%2==0):
        y = i
        #sum = sum + y
        y = 0
    d = k
    k = i + k
    i = d
    j+=1
#print("The sum is "+str(sum))
