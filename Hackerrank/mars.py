wrong = 0
x = raw_input()
l = len(x)/3
i = 0
while(i < len(x)):
    if(x[i] != 'S'):
       	wrong +=1 
    i += 3
i = 2
while(i < len(x)):
	if(x[i]!= 'S'):
		wrong += 1
	i += 3
i = 1
while(i < len(x)):
    if(x[i] != 'O'):
        wrong +=1 
    i += 3
    
print wrong