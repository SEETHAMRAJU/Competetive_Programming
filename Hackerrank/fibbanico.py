x=input("Please enter a number : ")
print("The first "+str(x)+" fibbanico numbers are :")
i = 1
j = 0
k = 2

while(j<x):
    print(i)
    #print(k)
    d = k    
    k = i + k
    i = d
    j+=1
     