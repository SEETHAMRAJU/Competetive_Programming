n,k = map(int ,raw_input().split())
heights = map(int ,raw_input().split())
drink = 0
#heights.sort()
for x in heights:
    if(k < x):
        drink = drink + (x - k)
print drink    
            
        