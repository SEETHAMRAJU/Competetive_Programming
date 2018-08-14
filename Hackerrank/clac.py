import math
def clr():
    print('\n'*50)

print("\t\t\t Calculator ")
print("1 : + \t2 : - \t3 : x \t4 : / \t5 : ^ \t6: Continue\t7: Exit ")
while(1):
    x=[0,0,0]
    y = input("Please enter number corresponding to the operation : ")
    x[0]=input("Please enter a number : ")
    x[1]=input("Please enter another number : ")
    if(y==1):
        x[2]=x[0]+x[1]
        print(str(x[2]))

    elif(y==2):
        x[2]=x[0]-x[1]
        print(str(x[2]))

    elif(y==3):
        x[2]=x[0] * x[1]
        print(str(x[2]))
    elif(y==4):
        x[2]=(x[0]+0.0) / x[1]
        print(str(x[2]))

    elif(y==5):
        x[2]=math.pow(x[0],x[1])
        print(str(x[2]))

    elif(y==6):
        
        continue;
    elif(y==7):
        break;
    
#elif(y==7):
#    x[2]=x[0]+x[1]
#    print(str(x[2]))